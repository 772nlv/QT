#include "mymusicwindow.h"
#include "ui_mymusicwindow.h"
#include <QDebug>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonArray>
#include "mainwindow.h"
MyMusicWindow::MyMusicWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyMusicWindow)
{
    ui->setupUi(this);
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground);//把窗口设置为透明
    m_pModel = new QStandardItemModel(ui->tableView);//实例化模型，并且指定模型依赖的控件
    //将数据模型设置到表对象上
    ui->tableView->setModel(m_pModel);
    //tableview 歌单头部
    QStringList fonts;
    fonts << "歌名" << "歌手" << "专辑" << "时长";
    m_pModel->setHorizontalHeaderLabels(fonts);

    //初始化一个网络助手
   http = new QNetworkAccessManager(this);

   //连接信号finish和接收信息的槽
   connect(http,SIGNAL(finished(QNetworkReply *)),this,SLOT(get_http_reply(QNetworkReply *)));

   //初始化播放器
   player = new QMediaPlayer();
   playlist = new QMediaPlaylist();
   player->setPlaylist(playlist);

   //连接播放总时间改变信号和信号槽
   connect(player,&QMediaPlayer::durationChanged,this,&MyMusicWindow::durationChanged_slot);

   //连接播放器的进度发生改变信号 信号槽
   connect(player,&QMediaPlayer::positionChanged,this,&MyMusicWindow::positionChanged_slot);

   ui->label->setText("0:00");
   ui->label_4->setText("0:00");

   ui->tableView->setShowGrid(false);              //不显示grid
   ui->tableView->setAlternatingRowColors(true);
   QPixmap pm1;
   pm1.load(":/png/cover.png");
   ui->cover_label->setPixmap(pm1);
   ui->cover_label->setScaledContents(true);

   QPixmap pm2;
   pm1.load(":/png/title.png");
   ui->label_2->setPixmap(pm1);
   ui->label_2->setScaledContents(true);
   //链接播放状态改变信号
    connect(player,SIGNAL(stateChanged(QMediaPlayer::State)),this,SLOT(play_img_reset()));

    //media 改变信号
    connect(player,SIGNAL(currentMediaChanged(QMediaContent)),this,SLOT(media_changed()));
//    MainWindow *Mwindow;
//    //接收传递当前用户名的信号
//    connect(Mwindow,&MainWindow::loginSuccess, this, &MyMusicWindow::onLoginSuccess);

    //数据库
    pSql = new SqliteOperator;
    pSql->open_db();
    pSql->normalFunc("CREATE TABLE Songs(ID INT,Song_name TEXt,Singger_name TEXT,Album_name TEXT,Duration TEXT)");
    pSql->close_database();

    QString address = "http://music.163.com/api/search/get/web?csrf_token=hlpretag=&hlposttag=&s=推荐" ;
    address += "&type=1&offset=0&total=true&limit=50";
    //发送请求
    http->get(QNetworkRequest(QUrl(address)));//发送一个finish()信号
}

MyMusicWindow::~MyMusicWindow()
{
    delete ui;
}

//保存上一级窗口
void MyMusicWindow::setComebackWindow(QWidget *pWindow)
{
    this->pComebackWindow = pWindow;
}

//解析Json字段
void MyMusicWindow::parseJson(QByteArray json)
{
    //清除表单内容
    m_pModel->clear();
    //清除歌曲信息容器内容
    musicInfo.clear();
    playlist->clear();
    //设置想获取的结果
    QString song_name;
    QString singer_name;
    QString album_name;
    QString song_time;
    int music_id;
    int rowIndex = 0;
    //首先把JSON字符串转为JSON文档，这样才能去检测里面是否包含JSON对象和数组等等。。。
    //在转换的过程中如果出错，会把错误原因放在json_error里面
    QByteArray byte_array = json;
    QJsonParseError json_error;
    QJsonDocument parse_doucment = QJsonDocument::fromJson(byte_array, &json_error);

    if (json_error.error == QJsonParseError::NoError)//判断解析过程是否有错误
    {
        if (parse_doucment.isObject())//判断文档是否是一个json对象
        {
            QJsonObject rootObj = parse_doucment.object();//获取文档JSON对象
            if(rootObj.contains("result"))
            {
                QJsonValue valuedata = rootObj.value("result");
                if(valuedata.isObject())//判断result对应的值是不是一个对象
                {
                    QJsonObject valuedataObject = valuedata.toObject();//把QJsonValue转为JsonObject对象
                    if(valuedataObject.contains("songs"))//判断resul对象里面有没有songs
                    {
                        QJsonValue valueArray = valuedataObject.value("songs");
                        if (valueArray.isArray())//判断valueArray是不是一个数组
                        {
                            //将valueArray转换成QJsonArray
                            QJsonArray array = valueArray.toArray();
                            int size = array.size();
                            for(int i = 0;i < size ; i++)
                            {
                                //一个个提取数组中的json数据
                                QJsonValue value = array.at(i);
                                if(value.isObject())
                                {
                                    QJsonObject object = value.toObject();
                                    //专辑1
                                    if(object.contains("album"))
                                    {
                                        QJsonValue album_object_temp = object.value("album");
                                        if(album_object_temp.isObject())
                                        {
                                            QJsonObject album_object = album_object_temp.toObject();
                                            if(album_object.contains("name"))
                                            {
                                                QJsonValue temp_name = album_object.value("name");
                                                if(temp_name.isString())
                                                {
                                                    album_name = temp_name.toString();
                                                }
                                            }
                                        }
                                    }
                                    //专辑2
                                    if(object.contains("alias"))
                                    {
                                        QJsonValue alias_object_temp = object.value("alias");
                                        if(alias_object_temp.isArray())
                                        {
                                            QJsonArray alias_object_temp_array = alias_object_temp.toArray();
                                            if(alias_object_temp_array.at(0).toString()!="")
                                            {
                                                album_name = alias_object_temp_array.at(0).toString()+"(别名)";
                                            }

                                        }
                                    }

                                    //歌手名字
                                    if(object.contains("artists"))
                                    {
                                        QJsonValue artists_value_temp = object.value("artists");
                                        if(artists_value_temp.isArray())
                                        {
                                            QJsonArray artists_temp_array = artists_value_temp.toArray();
                                            int size = artists_temp_array.size();
                                            for(int i = 0;i < size;i++)
                                            {
                                                QJsonValue artists_name = artists_temp_array.at(i);
                                                if(artists_name.isObject())
                                                {
                                                    QJsonObject artists_name_object = artists_name.toObject();
                                                    if(artists_name_object.contains("name"))
                                                    {
                                                        QJsonValue artists_name_value = artists_name_object.value("name");
                                                        if(artists_name_value.isString())
                                                        {
                                                            if(i == 0)
                                                            {
                                                                singer_name = artists_name_value.toString();
                                                            }

                                                            else
                                                            {
                                                                singer_name = singer_name + "/" + artists_name_value.toString();
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                    //歌曲名
                                    if(object.contains("name"))
                                    {
                                        QJsonValue song_name_value = object.value("name");
                                        if(song_name_value.isString())
                                        {
                                            song_name = song_name_value.toString();
                                        }
                                    }
                                    //时长
                                    if(object.contains("duration"))
                                    {
                                        QJsonValue duration_value = object.value("duration").toInt();
                                        int temp_song_time = duration_value.toInt();
                                        temp_song_time /= 1000;
                                        int a = temp_song_time / 60;
                                        int b = temp_song_time % 60;
                                        song_time = QString::number(a) + ":" + QString::number(b);
                                    }

                                    //歌曲id
                                    if(object.contains("id"))
                                    {
                                        QJsonValue id_value = object.value("id");
                                        music_id = id_value.toInt();
                                    }

                                    //封面照片
                                }
                                //表单头部
                                QStringList fonts;
                                fonts << "歌名" << "歌手" << "专辑" << "时长";
                                m_pModel->setHorizontalHeaderLabels(fonts);


                                //把歌曲信息放入容器中

                                musicInfo.append(new musicNode(music_id,song_name,singer_name,album_name,song_time,rowIndex));
                                //把表单内容设置为歌曲信息
                                 m_pModel->appendRow(QList<QStandardItem *>()<< new QStandardItem(song_name)<< new QStandardItem(singer_name)
                                                     << new QStandardItem(album_name)<< new QStandardItem(song_time));
                                //构建一个播放歌曲的连接
                                 QString link = "http://music.163.com/song/media/outer/url?id=";
                                 link += QString::number(music_id);
                                 link += ".mp3";
                                 //把链接加入的播放列表中
                                 playlist->addMedia(QUrl(link));
                                 rowIndex++;
//                                qDebug()<<music_id<<song_name<<album_name<<" "<<singer_name<<song_time;
                            }
                        }
                    }
                }
            }
        }
    }
}


//窗口最小化
void MyMusicWindow::on_pushButton_4_clicked()
{
    showMinimized();
}

//关闭窗口
void MyMusicWindow::on_pushButton_3_clicked()
{
    close();
}

//返回上一级
void MyMusicWindow::on_pushButton_2_clicked()
{
    this->close();
    pComebackWindow->show();
}

//点击搜索按键 搜索歌曲
void MyMusicWindow::on_pushButton_clicked()
{
    QString search = ui->lineEdit->text();
    //构建网易云的连接
    QString address = "http://music.163.com/api/search/get/web?csrf_token=hlpretag=&hlposttag=&s=" ;
    address+=search;
    address += "&type=1&offset=0&total=true&limit=50";
    qDebug()<<address;
    //发送请求
    http->get(QNetworkRequest(QUrl(address)));//发送一个finish()信号

}

//接收get到的信息
void MyMusicWindow::get_http_reply(QNetworkReply *reply)
{
    int state = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(state != 200)
    {
        qDebug()<<"网络连接失败";
    }
    qDebug()<<"网络访问成功";
    QByteArray json = reply->readAll();
//    QString str(json);
//    qDebug()<<str;
    parseJson(json);
}

//双击播放
void MyMusicWindow::on_tableView_doubleClicked(const QModelIndex &index)
{
    playlist->setCurrentIndex(index.row());
    player->play();

}
//修改进度条的位置
void MyMusicWindow::durationChanged_slot(int duration)
{
        //修改进度条的位置
        ui->horizontalSlider->setValue(0);
        ui->horizontalSlider->setRange(0,duration);
        QString Max_time;
        int temp_song_time = duration;
        temp_song_time /= 1000;
        int a = temp_song_time / 60;
        int b = temp_song_time % 60;
        Max_time = QString::number(a) + ":" + QString::number(b);

        ui->label->setText(Max_time);
}
//播放进度发生改变
void MyMusicWindow::positionChanged_slot(int cur_position)
{
        ui->horizontalSlider->setValue(cur_position);
        QString Cur_time;
        int temp_song_time = cur_position;
        temp_song_time /= 1000;
        int a = temp_song_time / 60;
        int b = temp_song_time % 60;
        Cur_time = QString::number(a) + ":" + QString::number(b);

        ui->label_4->setText(Cur_time);
}



//松开进度条按钮 改变进度
void MyMusicWindow::on_horizontalSlider_sliderReleased()
{
    player->setPosition(ui->horizontalSlider->value());
}

//点击播放/暂停按键
void MyMusicWindow::on_play_button_released()
{
//      if(QMediaPlayer:: PlayingState == player->state())
//      {
//          player->pause();
//      }
//      else{
//          player->play();
//      }
}

//播放按键图片设置
void MyMusicWindow::play_img_reset()
{
    if(QMediaPlayer:: PlayingState== player->state())
    {
        ui->play_button->setStyleSheet("#play_button{image: url(:/png/stop_normal.png);border-radius:30px;}#play_button:hover{image: url(:/png/stop_hover.png);border-radius:30px;}#play_button:pressed{image: url(:/png/stop_pressed.png);border-radius:30px;}");
    }
    else
    {
        ui->play_button->setStyleSheet("#play_button{image: url(:/png/play_normal.png);border-radius:30px;}#play_button:hover{image: url(:/png/play_hover.png);border-radius:30px;}#play_button:pressed{image: url(:/png/play_pressed.png);border-radius:30px;}");
    }
}
//点击播放/暂停按键
void MyMusicWindow::on_play_button_clicked()
{

    if(QMediaPlayer:: PlayingState == player->state())
    {
        player->pause();
    }
    else{
        player->play();
    }
}

//上一首按钮
void MyMusicWindow::on_front_music_clicked()
{
    player->pause();
    playlist->previous();
    player->play();
}

//下一首按钮
void MyMusicWindow::on_next_music_clicked()
{
    player->pause();
    playlist->next();
    player->play();
}
\
//media 改变
void MyMusicWindow::media_changed()
{
    int temp_value = 0;
    qDebug()<<"connect media_changed ok";
    for(int i = 0;i < musicInfo.size();i++)
    {
        if(playlist->currentIndex() == musicInfo[i]->rIndex)
        {
            qDebug()<<"开始播放"<<musicInfo[i]->songname_original;
            ui->songname->setText(musicInfo[i]->songname_original);
            ui->singgername->setText(musicInfo[i]->singername);

            //判断是不是红心歌曲
            QSqlQuery sqlQuery;
            pSql->normalSearch("select * from Songs",sqlQuery);
            while(sqlQuery.next())
            {
                int temp_id = sqlQuery.value(0).toInt();
                //yes
                if(musicInfo[i]->id == temp_id)
                {
                    ui->pushButton_5->setStyleSheet("#pushButton_5{image: url(:/png/colled.png);border-radius:30px;}#pushButton_5:hover{image: url(:/png/colled.png);border-radius:30px;}#pushButton_5:pressed{image: url(:/png/colled.png);border-radius:30px;}");
                    qDebug()<<"已收藏"<<musicInfo[i]->songname_original;
                    temp_value++;
                }
            }
            //不是红心歌曲
            if(temp_value == 0)
            {
                ui->pushButton_5->setStyleSheet("#pushButton_5{image: url(:/png/coll_normal1.png);border-radius:30px;}#pushButton_5:hover{image: url(:/png/coll_hover.png);border-radius:30px;}#pushButton_5:pressed{image: url(:/png/coll_hover.png);border-radius:30px;}");
            }
        }
    }
}

//今日推荐
void MyMusicWindow::on_reco_button_clicked()
{
    QString search = "推荐";
    //构建网易云的连接
    QString address = "http://music.163.com/api/search/get/web?csrf_token=hlpretag=&hlposttag=&s=" ;
    address+=search;
    address += "&type=1&offset=0&total=true&limit=50";
    qDebug()<<address;
    //发送请求
    http->get(QNetworkRequest(QUrl(address)));//发送一个finish()信号
    qDebug()<<"推荐";
}

//红心按键
void MyMusicWindow::on_pushButton_5_clicked()
{
    //清除错误收藏
    QString sql2 = QString("DELETE FROM Songs WHERE ID = 0");
    pSql->normalFunc(sql2);

    int temp_value = 0;
    qDebug()<<"Saved ok";
    for(int i = 0;i < musicInfo.size();i++)
    {
        //找到当前播放歌曲的信息
        if(playlist->currentIndex() == musicInfo[i]->rIndex)
        {
            //判断是否已经被收藏了
            //查询遍历数据库
            QSqlQuery sqlQuery;
            pSql->normalSearch("select * from Songs",sqlQuery);
            while(sqlQuery.next())
            {
                int temp_id = sqlQuery.value(0).toInt();
                //存在则取消收藏
                if(musicInfo[i]->id == temp_id)
                {
                    ui->pushButton_5->setStyleSheet("#pushButton_5{image: url(:/png/coll_normal1.png);border-radius:30px;}#pushButton_5:hover{image: url(:/png/coll_hover.png);border-radius:30px;}#pushButton_5:pressed{image: url(:/png/coll_hover.png);border-radius:30px;}");
                    qDebug()<<"取消收藏"<<musicInfo[i]->songname_original;
                    QString sql = QString("DELETE FROM Songs WHERE ID = %1").arg(musicInfo[i]->id);
                    pSql->normalFunc(sql);
                    temp_value++;
                }
            }
            //不存在则收藏
            if(temp_value == 0)
            {
               QString sql2 = QString("DELETE FROM Songs WHERE ID = 0");
               pSql->normalFunc(sql2);
               qDebug()<<"收藏"<<musicInfo[i]->songname_original;
               QString sql = QString("INSERT INTO Songs VALUES('%1','%2','%3','%4','%5')").arg(musicInfo[i]->id).arg(musicInfo[i]->songname_original).arg(musicInfo[i]->singername).arg(musicInfo[i]->album_name).arg(musicInfo[i]->duration);
               pSql->normalFunc(sql);
               ui->pushButton_5->setStyleSheet("#pushButton_5{image: url(:/png/colled.png);border-radius:30px;}#pushButton_5:hover{image: url(:/png/colled.png);border-radius:30px;}#pushButton_5:pressed{image: url(:/png/colled.png);border-radius:30px;}");
            }
        }
    }
}

//接收当前用户名
void MyMusicWindow::onLoginSuccess(const QString &username)
{
    CurrentUsername = username;
    qDebug()<<"get!"<<CurrentUsername;
}

//点击我喜欢的音乐
void MyMusicWindow::on_like_button_clicked()
{
    //清除表单内容
    m_pModel->clear();
    //清除歌曲信息容器内容
    musicInfo.clear();
    playlist->clear();

    int rowIndex = 0;
    //将数据库里面的内容导入到p_model;
    //遍历数据库
    QSqlQuery sqlQuery;
    pSql->normalSearch("select * from Songs",sqlQuery);
    while(sqlQuery.next())
    {
        //设置想获取的结果
        int music_id = sqlQuery.value(0).toInt();
        QString song_name = sqlQuery.value(1).toString();
        QString singer_name = sqlQuery.value(2).toString();
        QString album_name = sqlQuery.value(3).toString();
        QString song_time = sqlQuery.value(4).toString();

        //表单头部
        QStringList fonts;
        fonts << "歌名" << "歌手" << "专辑" << "时长";
        m_pModel->setHorizontalHeaderLabels(fonts);
        //把歌曲信息放入容器中
        musicInfo.append(new musicNode(music_id,song_name,singer_name,album_name,song_time,rowIndex));
        //把表单内容设置为歌曲信息
         m_pModel->appendRow(QList<QStandardItem *>()<< new QStandardItem(song_name)<< new QStandardItem(singer_name)
                             << new QStandardItem(album_name)<< new QStandardItem(song_time));
        //构建一个播放歌曲的连接
         QString link = "http://music.163.com/song/media/outer/url?id=";
         link += QString::number(music_id);
         link += ".mp3";
         //把链接加入的播放列表中
         playlist->addMedia(QUrl(link));
         rowIndex++;
    }

}
