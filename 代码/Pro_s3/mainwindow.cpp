#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mymusicwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //将页面设置为无边框且透明
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground);//把窗口设置为透明
    QPixmap pm;
    pm.load(":/png/app_icon.png");
    //按比例设置图片
    ui->label->setPixmap(pm);
    ui->label->setScaledContents(true);
    //设置图标下面的lineEdit无边框
//    ui->lineEdit_3->setStyleSheet("background:transparent;border-width:0;border-style:outset");


    //将登录页面的背景设置为gif
//    BackMovie = new QMovie(":/R-C.gif");
//    ui->label_2->setMovie(BackMovie);
//    BackMovie->start();
    pMusicWindow  = new MyMusicWindow;
    pChooseWindow = new FuncChooseWindow;

    //数据库
    pSql = new SqliteOperator;
    pSql->open_db();
    pSql->creat_table();

    //注册界面
    pRegiWindow = new RegiWindow;
    //设置密码不可见
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_3_clicked()
{
//    pMusicWindow->show();
    showMinimized();
}

void MainWindow::on_pushButton_2_clicked()
{
    close();
}

//登录按键点击信号
void MainWindow::on_pushButton_clicked()
{
    int temp_value = 0;
    //查询遍历数据库
    QSqlQuery sqlQuery;
    pSql->normalSearch("select * from Users",sqlQuery);
    while (sqlQuery.next())
    {
        QString name = sqlQuery.value(0).toString();
        QString passwd = sqlQuery.value(1).toString();
        if(name == ui->lineEdit->text() || passwd == ui->lineEdit_2->text())
        {
//            //保留当前登录用户名，并通过信号发送给子窗口
//            QString CurrentUsername = ui->lineEdit->text();
//            qDebug()<<CurrentUsername<<ui->lineEdit->text();
//            loginSuccess(CurrentUsername);
            temp_value++;
            pChooseWindow->setComebackWindow(this);
            pChooseWindow->show();
            this->hide();
            ui->label_2->setText(" ");
        }
    }
    if(temp_value == 0)
    {
        ui->label_2->setText("账号或密码错误!!!");
        ui->lineEdit->clear();
        ui->lineEdit_2->clear();
    }
}

//注册界面
void MainWindow::on_pushButton_4_clicked()
{
    pRegiWindow->setComebackWindow(this);
    pRegiWindow->show();
    this->hide();
}

