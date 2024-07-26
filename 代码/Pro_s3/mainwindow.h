#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "mymusicwindow.h"
#include "funcchoosewindow.h"
#include "sqliteoperator.h"
#include "regiwindow.h"
#include <QMainWindow>
#include <QMovie>
//当前登录的用户名
extern QString CurrentUsername;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_4_clicked();


private:
    Ui::MainWindow *ui;
    //动态背景
    QMovie *BackMovie;
    //音乐播放器界面
    MyMusicWindow *pMusicWindow;
    //功能选择界面
    FuncChooseWindow *pChooseWindow;
    //数据库
    SqliteOperator *pSql;
    //注册界面
    RegiWindow *pRegiWindow;

signals:
    void loginSuccess(const QString &username); // 定义信号，携带用户名作为参数

};
#endif // MAINWINDOW_H
