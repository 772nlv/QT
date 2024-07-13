#ifndef MYMUSICWINDOW_H
#define MYMUSICWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QVector>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include "sqliteoperator.h"
//一首歌的信息
struct musicNode
{
    musicNode(int id, QString songname_original, QString singername, QString album_name, QString duration ,int rIndex)
    {
        this->id = id;
        this->songname_original = songname_original;
        this->singername = singername;
        this->album_name = album_name;
        this->duration = duration;
        this->rIndex = rIndex;
    }
    int id;                    //歌曲ID
    QString songname_original; //歌曲名
    QString singername;        //歌手
    QString album_name;        //专辑
    QString duration;          	//时间
    int rIndex;                 //序列号
};
namespace Ui {
class MyMusicWindow;
}

class MyMusicWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyMusicWindow(QWidget *parent = nullptr);
    ~MyMusicWindow();
    void setComebackWindow(QWidget * pWindow);
    //解析Json字段
    void parseJson(QByteArray json);
private slots:

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_clicked();
    //接收get到的信息
    void get_http_reply(QNetworkReply *reply);
    //双击播放
    void on_tableView_doubleClicked(const QModelIndex &index);

    //播放进度发生改变槽函数
    void durationChanged_slot(int duration);
    //进度条位置发生改变槽函数
    void positionChanged_slot(int cur_position);
    //松开进度条
    void on_horizontalSlider_sliderReleased();

    void on_play_button_released();

    //播放按键图片设置
    void play_img_reset();

    void on_play_button_clicked();

    void on_front_music_clicked();

    void on_next_music_clicked();

    //播放的歌曲改变 信号槽
    void media_changed();


    void on_reco_button_clicked();

    void on_pushButton_5_clicked();
    void onLoginSuccess(const QString &username); // 槽函数，更新用户名显示
    void on_like_button_clicked();

private:

    Ui::MyMusicWindow *ui;
    //指向返回窗口的指针
    QWidget *pComebackWindow;
    //数据模型 导入tableview
    QStandardItemModel *m_pModel;
    //歌曲信息数组
    QVector<musicNode*> musicInfo;
    //网络访问管理
    QNetworkAccessManager *http;
    //播放器
    QMediaPlayer *player;
    //播放列表
    QMediaPlaylist *playlist;
    //当前登录的用户名
    QString CurrentUsername;
    //数据库
    SqliteOperator *pSql;
};

#endif // MYMUSICWINDOW_H
