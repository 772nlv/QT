#include "regiwindow.h"
#include "ui_regiwindow.h"
#include <QDebug>
RegiWindow::RegiWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::RegiWindow)
{
    ui->setupUi(this);
    //将页面设置为无边框且透明
    this->setWindowFlag(Qt::FramelessWindowHint);//设置窗口为无边框
    this->setAttribute(Qt::WA_TranslucentBackground);//把窗口设置为透明
    QPixmap pm;
    pm.load(":/png/regi_icon2.png");
    //按比例设置图片
    ui->label->setPixmap(pm);
    ui->label->setScaledContents(true);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    pSql = new SqliteOperator;
    pSql->open_db();
}

RegiWindow::~RegiWindow()
{
    delete ui;
}

//保留上一级窗口
void RegiWindow::setComebackWindow(QWidget *pWindow)
{
    this->pComebackWindow = pWindow;
    ui->label_2->setText(" ");
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
}

//返回上一级窗口
void RegiWindow::on_pushButton_3_clicked()
{
    this->close();
    pComebackWindow->show();
}

//最小化
void RegiWindow::on_pushButton_4_clicked()
{
    showMinimized();
}

//退出
void RegiWindow::on_pushButton_5_clicked()
{
     close();
}

//点击注册按钮
void RegiWindow::on_pushButton_clicked()
{
    int temp_value = 0;
    qDebug()<<ui->lineEdit->text()<<ui->lineEdit_2->text()<<ui->lineEdit_3->text();
    //查询遍历数据库
    QSqlQuery sqlQuery;
    pSql->normalSearch("select * from Users",sqlQuery);
    while (sqlQuery.next())
    {
        QString name = sqlQuery.value(0).toString();
        if(name == ui->lineEdit->text())
        {
            ui->label_2->setText("注册失败！");
            qDebug()<<"该用户已存在";
            ui->lineEdit->clear();
            ui->lineEdit_2->clear();
            ui->lineEdit_3->clear();
            temp_value++;
        }
    }
    //注册成功
    if(temp_value == 0)
    {
        //插入新用户的信息
        ui->label_2->setText("注册成功！");
        QString sql = QString("INSERT INTO Users VALUES('%1','%2','%3')").arg(ui->lineEdit->text()).arg(ui->lineEdit_2->text()).arg(ui->lineEdit_3->text());

        pSql->normalFunc(sql);
    }

}
