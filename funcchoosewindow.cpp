#include "funcchoosewindow.h"
#include "ui_funcchoosewindow.h"
#include "mainwindow.h"
#include <QDebug>
FuncChooseWindow::FuncChooseWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::FuncChooseWindow)
{
    ui->setupUi(this);
    //将页面设置为无边框且透明
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground);//把窗口设置为透明
    pMusicWindow = new MyMusicWindow;
    pWeatherWindow = new WeatherWindow;


}

FuncChooseWindow::~FuncChooseWindow()
{
    delete ui;
}

//进入下一级窗口时，保存本窗口为上一级窗口
void FuncChooseWindow::setComebackWindow(QWidget *pWindow)
{

    this->pComebackWindow = pWindow;
}

//最小化按钮
void FuncChooseWindow::on_pushButton_clicked()
{
    showMinimized();
}

//关闭按钮
void FuncChooseWindow::on_pushButton_2_clicked()
{
    close();
}


//返回上一级
void FuncChooseWindow::on_pushButton_3_clicked()
{
    this->close();
    pComebackWindow->show();
}

//进入音乐窗口
void FuncChooseWindow::on_music_button_clicked()
{
    pMusicWindow->setComebackWindow(this);
    pMusicWindow->show();
    this->hide();
}

//点击抖音按键
void FuncChooseWindow::on_tik_button_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://www.douyin.com/")));

}

//高德地图
void FuncChooseWindow::on_map_button_clicked()
{
    QDesktopServices::openUrl(QUrl(QString("https://ditu.amap.com/")));
}

//天气
void FuncChooseWindow::on_Weather_but_clicked()
{
    pWeatherWindow->setComebackWindow(this);
    pWeatherWindow->show();
    this->hide();
}
