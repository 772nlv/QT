#ifndef FUNCCHOOSEWINDOW_H
#define FUNCCHOOSEWINDOW_H

#include <QMainWindow>
#include "mymusicwindow.h"
#include "weatherwindow.h"
#include <QDesktopServices>
#include <QUrl>

namespace Ui {
class FuncChooseWindow;
}

class FuncChooseWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit FuncChooseWindow(QWidget *parent = nullptr);
    ~FuncChooseWindow();
    void setComebackWindow(QWidget * pWindow);
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_music_button_clicked();

    void on_tik_button_clicked();

    void on_map_button_clicked();

    void on_Weather_but_clicked();

private:
    Ui::FuncChooseWindow *ui;
    //指向返回窗口的指针
    QWidget *pComebackWindow;
    //音乐播放器界面
    MyMusicWindow *pMusicWindow;
    //天气
    WeatherWindow *pWeatherWindow;
};

#endif // FUNCCHOOSEWINDOW_H
