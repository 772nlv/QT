#include "weatherwindow.h"
#include "ui_weatherwindow.h"
#include <QFile>
#include <QJsonParseError>
#include <QJsonObject>
#include <QJsonArray>
#include <QNetworkReply>
WeatherWindow::WeatherWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WeatherWindow)
{
    ui->setupUi(this);
    //将页面设置为无边框且透明
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground);//把窗口设置为透明

    QPixmap pm;
    pm.load(":/png/wea_icon.png");
    //按比例设置图片
    ui->wea_icon->setPixmap(pm);
    ui->wea_icon->setScaledContents(true);

    QPixmap pm1;
    pm1.load(":/png/weather_sindow.png");
    ui->label_7->setPixmap(pm1);
    ui->label_7->setScaledContents(true);

    //初始化http
    http = new QNetworkAccessManager;

    //连接信号finish和接收信息的槽
    connect(http,SIGNAL(finished(QNetworkReply *)),this,SLOT(get_http_reply(QNetworkReply *)));

    //进入页面显示长沙天气
    //构建api的连接
    QString address = "http://t.weather.sojson.com/api/weather/city/101250401" ;
    //发送请求
    http->get(QNetworkRequest(QUrl(address)));//发送一个finish()信号

}

WeatherWindow::~WeatherWindow()
{
    delete ui;
}

void WeatherWindow::setComebackWindow(QWidget *pWindow)
{
    this->pComebackWindow = pWindow;

}

//不同天气对应不同的图片
QPixmap WeatherWindow::Weather_type_image(QString type)
{
    QPixmap pm;
    if(type == "大雨")
    {
        pm.load(":/png/dayu.png");
    }
    if(type == "中雨")
    {
        pm.load(":/png/zhongyu.png");
    }
    if(type == "小雨")
    {
        pm.load(":/png/xiaoyu.png");
    }
    if(type == "阴")
    {
        pm.load(":/png/yintian.png");
    }
    if(type == "多云")
    {
        pm.load(":/png/duoyun.png");
    }
    if(type == "晴")
    {
        pm.load(":/png/yintian.png");
    }
    if(type == "阴")
    {
        pm.load(":/png/qing.png");
    }
    return pm;
}

//解析Json字段
void WeatherWindow::parseJson(QByteArray json)
{
    WeatherInfo.clear();
    qDebug()<<"开始解析";
    //当前信息
    QString shengfen;
    QString cityname;
    QString cur_wendu;
    QString cur_shidu;
    QString pm25;
    //昨天信息
    QString yes_type;

    //节点信息
    QString data_week;
    QString high_and_low;
    QString ymd;
    QString api;
    QString fxt;
    QString wea_type;
    QString notice;

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
            //城市信息解析
            if(rootObj.contains("cityInfo"))
            {
                QJsonValue valuedata = rootObj.value("cityInfo");
                if(valuedata.isObject())
                {
                    QJsonObject valuedataObject = valuedata.toObject();
                    if(valuedataObject.contains("parent"))
                    {
                        QJsonValue parent_name_value = valuedataObject.value("parent");
                        shengfen = parent_name_value.toString();
                        qDebug()<<shengfen;
                    }
                    if(valuedataObject.contains("city"))
                    {
                        QJsonValue city_name_value = valuedataObject.value("city");
                        cityname = city_name_value.toString();
                        qDebug()<<cityname;
                    }
                    QString temp_name = "    "+shengfen + "," + cityname;
                    ui->lineEdit_2->setText(temp_name);
                }
            }
            //天气信息
            if(rootObj.contains("data"))
            {
                QJsonValue valuedata = rootObj.value("data");
                if(valuedata.isObject())
                {
                    QJsonObject valuedataObject = valuedata.toObject();
                    //当前温度
                    if(valuedataObject.contains("wendu"))
                    {
                        QJsonValue cur_wendu_value = valuedataObject.value("wendu");
                        cur_wendu = cur_wendu_value.toString();
                        qDebug()<<cur_wendu;
                        cur_wendu += "℃";
                        cur_wendu = "    " + cur_wendu;
                        ui->lineEdit_3->setText(cur_wendu);
                    }
                    //当前湿度
                    if(valuedataObject.contains("shidu"))
                    {
                        QJsonValue temp_value = valuedataObject.value("shidu");
                        cur_shidu = temp_value.toString();
                        qDebug()<<cur_shidu;
                        ui->lineEdit_13->setText(cur_shidu);
                        cur_shidu = "     " + cur_shidu;
                        ui->lineEdit_6->setText(cur_shidu);

                    }
                    //pm25
                    if(valuedataObject.contains("pm25"))
                    {
                        int pm25_temp;
                        QJsonValue pm25_value = valuedataObject.value("pm25");
                        pm25_temp = pm25_value.toInt();
                        pm25 = QString::number(pm25_temp);
                        ui->lineEdit_12->setText(pm25);
                    }
                    //节点信息
                    if(valuedataObject.contains("forecast"))
                    {
                        QJsonValue valueArray = valuedataObject.value("forecast");
                        if (valueArray.isArray())//判断valueArray是不是一个数组
                        {
                            //将valueArray转换成QJsonArray
                            QJsonArray array = valueArray.toArray();
                            int size = array.size();
                            for(int i = 0;i < size ; i++)
                            {
                                //把数组里面的信息一个个提取出来
                                QJsonValue value = array.at(i);
                                if(value.isObject())
                                {
                                    QJsonObject object = value.toObject();

                                    QString data;
                                    QString week_day;
                                    //data_week
                                    if(object.contains("date"))
                                    {
                                        QJsonValue temp_value = object.value("date");
                                        data = temp_value.toString();
                                    }
                                    if(object.contains("week"))
                                    {
                                        QJsonValue temp_value = object.value("week");
                                        week_day = temp_value.toString();
                                    }
                                    data_week = data + " " + week_day;;

                                    //high and low
                                    QString high;
                                    QString low;
                                    if(object.contains("high"))
                                    {
                                        QJsonValue temp_value = object.value("high");
                                        high = temp_value.toString();
                                    }
                                    if(object.contains("low"))
                                    {
                                        QJsonValue temp_value = object.value("low");
                                        low = temp_value.toString();
                                    }
                                    high_and_low = low + "~" + high;
                                    //ymd
                                    if(object.contains("ymd"))
                                    {
                                        QJsonValue temp_value = object.value("ymd");
                                        ymd = temp_value.toString();
                                        ymd = "  " + ymd;
                                    }

                                    //api
                                    if(object.contains("aqi"))
                                    {
                                        int temp_api;
                                        QJsonValue temp_value = object.value("aqi");
                                        temp_api = temp_value.toInt();
                                        api = QString::number(temp_api);
                                    }
                                    //fxt
                                    QString fl;
                                    QString fx;
                                    if(object.contains("fx"))
                                    {
                                        QJsonValue temp_value = object.value("fx");
                                        fx = temp_value.toString();
                                    }
                                    if(object.contains("fl"))
                                    {
                                        QJsonValue temp_value = object.value("fl");
                                        fl = temp_value.toString();
                                    }
                                    fxt = fx + fl;
                                    //wea_type
                                    if(object.contains("type"))
                                    {
                                        QJsonValue temp_value = object.value("type");
                                        wea_type = temp_value.toString();
                                    }
                                    //notice
                                    if(object.contains("notice"))
                                    {
                                        QJsonValue temp_value = object.value("notice");
                                        notice = temp_value.toString();
                                    }
                                }
                               WeatherInfo.append(new WeatherNode(data_week,high_and_low,ymd,api,fxt,wea_type,notice));

                            }
                            ui->lineEdit_25->setText(WeatherInfo[0]->ymd);
                            ui->lineEdit_4->setText(WeatherInfo[0]->high_and_low);
                            ui->lineEdit_5->setText(WeatherInfo[0]->notice);
                            ui->lineEdit_11->setText(WeatherInfo[0]->api);
                            ui->lineEdit_14->setText(WeatherInfo[0]->fxt);
                            ui->label->setPixmap(Weather_type_image(WeatherInfo[0]->type));
                            ui->label->setScaledContents(true);
                            //设置futrueWeight
                            ui->label_2->setPixmap(Weather_type_image(WeatherInfo[0]->type));
                            ui->label_2->setScaledContents(true);
                            ui->label_3->setPixmap(Weather_type_image(WeatherInfo[1]->type));
                            ui->label_3->setScaledContents(true);
                            ui->label_4->setPixmap(Weather_type_image(WeatherInfo[2]->type));
                            ui->label_4->setScaledContents(true);
                            ui->label_5->setPixmap(Weather_type_image(WeatherInfo[3]->type));
                            ui->label_5->setScaledContents(true);
                            ui->label_6->setPixmap(Weather_type_image(WeatherInfo[4]->type));
                            ui->label_6->setScaledContents(true);

                            ui->lineEdit_20->setText(WeatherInfo[0]->data_week);
                            ui->lineEdit_21->setText(WeatherInfo[1]->data_week);
                            ui->lineEdit_22->setText(WeatherInfo[2]->data_week);
                            ui->lineEdit_23->setText(WeatherInfo[3]->data_week);
                            ui->lineEdit_24->setText(WeatherInfo[4]->data_week);

                            ui->textEdit->setText(WeatherInfo[0]->high_and_low);
                            ui->textEdit_2->setText(WeatherInfo[1]->high_and_low);
                            ui->textEdit_3->setText(WeatherInfo[2]->high_and_low);
                            ui->textEdit_4->setText(WeatherInfo[3]->high_and_low);
                            ui->textEdit_5->setText(WeatherInfo[4]->high_and_low);

                        }
                    }
                }
            }
        }
    }
}

//返回上一级
void WeatherWindow::on_pushButton_clicked()
{
    this->close();
    pComebackWindow->show();
}

void WeatherWindow::on_pushButton_2_clicked()
{
    showMinimized();
}

void WeatherWindow::on_pushButton_3_clicked()
{
    close();
}

//搜索城市按键
void WeatherWindow::on_search_button_clicked()
{
    QString search_name = ui->lineEdit->text();
    QString search;
    QFile file(":/city.txt");
    bool ret = file.open(QIODevice::ReadOnly | QIODevice::Text);
    if(ret == false)
    {
        qDebug()<<"文件打开失败";
    }
    QTextStream text(&file);
    text.setCodec("utf8");
    while(!text.atEnd())
    {
        //读取每一行的数据
        QString str = text.readLine();;
        QStringList parts = str.split("\t", QString::SkipEmptyParts); // 跳过空字符串
        if (parts.size() >= 2)
        { // 确保分割后的列表至少有两个元素
        QString firstPart = parts.at(0); // 第一个字符串
        QString secondPart = parts.at(1); // 第二个字符串
        if(search_name == secondPart)
        {
            search = firstPart;
            qDebug() << "第一个字符串：" << firstPart << "，第二个字符串：" << secondPart;
        }
       }
    }
    file.close();

    //构建api的连接
    QString address = "http://t.weather.sojson.com/api/weather/city/" ;
    address+=search;
    qDebug()<<address;
    //发送请求
    http->get(QNetworkRequest(QUrl(address)));//发送一个finish()信号
}

void WeatherWindow::get_http_reply(QNetworkReply *reply)
{
    int state = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
    if(state != 200)
    {
        qDebug()<<"网络连接失败";
    }
    qDebug()<<"网络访问成功";
    QByteArray json = reply->readAll();
    parseJson(json);
}
