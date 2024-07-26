/********************************************************************************
** Form generated from reading UI file 'funcchoosewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCCHOOSEWINDOW_H
#define UI_FUNCCHOOSEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FuncChooseWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton_3;
    QPushButton *music_button;
    QPushButton *map_button;
    QPushButton *tik_button;
    QPushButton *Weather_but;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QMainWindow *FuncChooseWindow)
    {
        if (FuncChooseWindow->objectName().isEmpty())
            FuncChooseWindow->setObjectName(QStringLiteral("FuncChooseWindow"));
        FuncChooseWindow->resize(499, 541);
        FuncChooseWindow->setStyleSheet(QLatin1String("#centralwidget{\n"
"	background:rgba(255,255,255,100%);\n"
"	border-radius:30px;\n"
"	background-color: rgb(140, 140, 140);\n"
"}\n"
"\n"
"#QLabel{\n"
"	border-radius:50px;\n"
"}\n"
"QPushButton{\n"
"	background:#1e1d1d;\n"
"	border-radius:10px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"\n"
"}"));
        centralwidget = new QWidget(FuncChooseWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 0, 51, 31));
        music_button = new QPushButton(centralwidget);
        music_button->setObjectName(QStringLiteral("music_button"));
        music_button->setGeometry(QRect(40, 70, 200, 200));
        music_button->setMinimumSize(QSize(200, 200));
        music_button->setMaximumSize(QSize(200, 200));
        music_button->setStyleSheet(QLatin1String("#music_button{\n"
"	image: url(:/png/music_icon.png);\n"
"	border-radius:30px;\n"
"}\n"
"#music_button:hover{\n"
"\n"
"	image: url(:/png/choose_music1.png);\n"
"	border-radius:30px;\n"
"}\n"
"#front_music:pressed{\n"
"	image: url(:/png/front_pressed.png);\n"
"	border-radius:30px;\n"
"}"));
        map_button = new QPushButton(centralwidget);
        map_button->setObjectName(QStringLiteral("map_button"));
        map_button->setGeometry(QRect(260, 300, 200, 200));
        map_button->setMinimumSize(QSize(200, 200));
        map_button->setStyleSheet(QLatin1String("#map_button{\n"
"	border-radius:30px;\n"
"	image: url(:/png/11map.png);	\n"
"}	\n"
"\n"
"#map_button:hover{\n"
"	\n"
"	image: url(:/png/choose_map.png);\n"
"	border-radius:30px;\n"
"}\n"
""));
        tik_button = new QPushButton(centralwidget);
        tik_button->setObjectName(QStringLiteral("tik_button"));
        tik_button->setGeometry(QRect(40, 300, 200, 200));
        tik_button->setMinimumSize(QSize(200, 200));
        tik_button->setStyleSheet(QLatin1String("\n"
"#tik_button{\n"
"	image: url(:/png/11douy.png);\n"
"	border-radius:30px;\n"
"}\n"
"\n"
"\n"
"#tik_button:hover{\n"
"	\n"
"	\n"
"	image: url(:/png/choose_douyin.png);\n"
"	border-radius:30px;\n"
"}\n"
""));
        Weather_but = new QPushButton(centralwidget);
        Weather_but->setObjectName(QStringLiteral("Weather_but"));
        Weather_but->setGeometry(QRect(260, 70, 200, 200));
        Weather_but->setMinimumSize(QSize(200, 200));
        Weather_but->setStyleSheet(QLatin1String("\n"
"#Weather_but{\n"
"	image: url(:/png/11weather.png);\n"
"	border-radius:30px;\n"
"}\n"
"\n"
"\n"
"#Weather_but:hover{\n"
"	\n"
"	image: url(:/png/choose_weather.png);\n"
"	border-radius:30px;\n"
"}\n"
"\n"
"\n"
""));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(407, 0, 43, 31));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(455, 0, 43, 31));
        FuncChooseWindow->setCentralWidget(centralwidget);

        retranslateUi(FuncChooseWindow);

        QMetaObject::connectSlotsByName(FuncChooseWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FuncChooseWindow)
    {
        FuncChooseWindow->setWindowTitle(QApplication::translate("FuncChooseWindow", "MainWindow", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("FuncChooseWindow", "<", Q_NULLPTR));
        music_button->setText(QString());
        map_button->setText(QString());
        tik_button->setText(QString());
        Weather_but->setText(QString());
        pushButton->setText(QApplication::translate("FuncChooseWindow", "-", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("FuncChooseWindow", "\303\227", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FuncChooseWindow: public Ui_FuncChooseWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCCHOOSEWINDOW_H
