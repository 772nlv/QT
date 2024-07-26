#include "qpresslabel.h"
#include "mymusicwindow.h"
#include "mainwindow.h"

Qpresslabel::Qpresslabel(QWidget *parent)
{
    qDebug()<<"ddd";

}

void Qpresslabel::mousePressEvent(QMouseEvent *event)
{
    Enter_musicwindow();
    qDebug()<<"hhh";
}
