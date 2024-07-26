#ifndef REGIWINDOW_H
#define REGIWINDOW_H

#include <QMainWindow>
#include "sqliteoperator.h"
namespace Ui {
class RegiWindow;
}

class RegiWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit RegiWindow(QWidget *parent = nullptr);
    ~RegiWindow();
    void setComebackWindow(QWidget * pWindow);
private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();


    void on_pushButton_clicked();

private:
    Ui::RegiWindow *ui;
    QWidget *pComebackWindow;//指向返回窗口的指针
    SqliteOperator *pSql;

    friend class Mainwindow;
};

#endif // REGIWINDOW_H
