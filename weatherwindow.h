#ifndef WEATHERWINDOW_H
#define WEATHERWINDOW_H

#include <QMainWindow>
#include <QStandardItemModel>
#include <QNetworkAccessManager>
#include <QNetworkReply>

//一天的天气信息
struct WeatherNode
{
    WeatherNode(QString data_week,QString high_and_low,QString ymd,QString api,QString fxt,QString type,QString notice)
    {
        this->data_week = data_week;
        this->high_and_low = high_and_low;
        this->ymd = ymd;
        this->api = api;
        this->fxt = fxt;
        this->type = type;
        this->notice = notice;
    }
     QString data_week;
     QString high_and_low;
     QString ymd;
     QString api;
     QString fxt;
     QString type;
     QString notice;
};
namespace Ui {
class WeatherWindow;
}

class WeatherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WeatherWindow(QWidget *parent = nullptr);
    ~WeatherWindow();
    void setComebackWindow(QWidget * pWindow);
    QPixmap Weather_type_image(QString type);
    //解析Json字段
    void parseJson(QByteArray json);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_search_button_clicked();
    //接收get到的信息
    void get_http_reply(QNetworkReply *reply);
private:
    Ui::WeatherWindow *ui;
    //指向返回窗口的指针
    QWidget *pComebackWindow;
    //网络访问管理
    QNetworkAccessManager *http;
    QVector<WeatherNode*> WeatherInfo;
};

#endif // WEATHERWINDOW_H
