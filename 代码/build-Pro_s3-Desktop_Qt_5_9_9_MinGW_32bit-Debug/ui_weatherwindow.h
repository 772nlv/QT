/********************************************************************************
** Form generated from reading UI file 'weatherwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WEATHERWINDOW_H
#define UI_WEATHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WeatherWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QWidget *widget_2;
    QWidget *widget;
    QLineEdit *lineEdit;
    QPushButton *search_button;
    QLabel *wea_icon;
    QSplitter *splitter;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QWidget *today_weight;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QWidget *widget_3;
    QSplitter *splitter_2;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_14;
    QSplitter *splitter_3;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_8;
    QLabel *label_7;
    QLineEdit *lineEdit_25;
    QWidget *futrue_weight;
    QWidget *widget_4;
    QLabel *label_2;
    QTextEdit *textEdit;
    QWidget *widget_5;
    QLabel *label_3;
    QTextEdit *textEdit_2;
    QWidget *widget_6;
    QLabel *label_4;
    QTextEdit *textEdit_3;
    QWidget *widget_7;
    QLabel *label_5;
    QTextEdit *textEdit_4;
    QWidget *widget_8;
    QLabel *label_6;
    QTextEdit *textEdit_5;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_22;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_24;

    void setupUi(QMainWindow *WeatherWindow)
    {
        if (WeatherWindow->objectName().isEmpty())
            WeatherWindow->setObjectName(QStringLiteral("WeatherWindow"));
        WeatherWindow->resize(771, 660);
        WeatherWindow->setStyleSheet(QString::fromUtf8("QWeight:{\n"
"	border-radius: 20px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"}\n"
"\n"
"QLineEdit{\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	padding-left: 15px;\n"
"}"));
        centralwidget = new QWidget(WeatherWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("border-radius: 20px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */\n"
"background-color: rgb(211, 211, 211);"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 41, 31));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(10, 40, 751, 81));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 183, 119);\n"
"background-color: rgb(145, 145, 145);\n"
"border-radius: 20px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */"));
        widget = new QWidget(widget_2);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 20, 361, 41));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"border-radius: 15px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */"));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(10, 10, 291, 21));
        lineEdit->setStyleSheet(QString::fromUtf8("border-radius: 15px;     /* \350\276\271\346\241\206\345\234\206\350\247\222 */"));
        search_button = new QPushButton(widget);
        search_button->setObjectName(QStringLiteral("search_button"));
        search_button->setGeometry(QRect(310, 0, 41, 41));
        search_button->setStyleSheet(QLatin1String("#search_button{\n"
"	image: url(:/png/search_normal.png);\n"
"	border-radius:15px;\n"
"}\n"
"#search_button:hover{\n"
"	image: url(:/png/search_hover.png);\n"
"	border-radius:15px;\n"
"}\n"
"#search_button:pressed{\n"
"	image: url(:/png/search_press.png);\n"
"	border-radius:15px;\n"
"}\n"
""));
        wea_icon = new QLabel(widget_2);
        wea_icon->setObjectName(QStringLiteral("wea_icon"));
        wea_icon->setGeometry(QRect(650, 10, 71, 61));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(690, 0, 71, 21));
        splitter->setOrientation(Qt::Horizontal);
        pushButton_2 = new QPushButton(splitter);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        splitter->addWidget(pushButton_2);
        pushButton_3 = new QPushButton(splitter);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        splitter->addWidget(pushButton_3);
        today_weight = new QWidget(centralwidget);
        today_weight->setObjectName(QStringLiteral("today_weight"));
        today_weight->setGeometry(QRect(10, 130, 751, 331));
        today_weight->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"border-radius: 20px;"));
        lineEdit_2 = new QLineEdit(today_weight);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(10, 10, 171, 51));
        lineEdit_2->setStyleSheet(QStringLiteral("background-color: rgb(255, 239, 243);"));
        label = new QLabel(today_weight);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 60, 121, 111));
        label->setStyleSheet(QStringLiteral(""));
        lineEdit_3 = new QLineEdit(today_weight);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 70, 113, 41));
        lineEdit_3->setStyleSheet(QStringLiteral("background-color: rgb(255, 233, 243);"));
        lineEdit_4 = new QLineEdit(today_weight);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 130, 241, 41));
        lineEdit_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 240, 243);"));
        lineEdit_5 = new QLineEdit(today_weight);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(20, 180, 701, 41));
        lineEdit_5->setStyleSheet(QLatin1String("background-color: rgb(255, 237, 246);\n"
"border-radius: 10px; "));
        lineEdit_6 = new QLineEdit(today_weight);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(292, 70, 121, 41));
        lineEdit_6->setStyleSheet(QStringLiteral("background-color: rgb(255, 228, 232);"));
        widget_3 = new QWidget(today_weight);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setGeometry(QRect(20, 230, 701, 91));
        widget_3->setStyleSheet(QLatin1String("background-color: rgb(181, 181, 181);\n"
"background-color: rgb(218, 193, 202);"));
        splitter_2 = new QSplitter(widget_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setGeometry(QRect(30, 50, 651, 20));
        splitter_2->setOrientation(Qt::Horizontal);
        lineEdit_11 = new QLineEdit(splitter_2);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));
        splitter_2->addWidget(lineEdit_11);
        lineEdit_12 = new QLineEdit(splitter_2);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));
        splitter_2->addWidget(lineEdit_12);
        lineEdit_13 = new QLineEdit(splitter_2);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));
        splitter_2->addWidget(lineEdit_13);
        lineEdit_14 = new QLineEdit(splitter_2);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));
        splitter_2->addWidget(lineEdit_14);
        splitter_3 = new QSplitter(widget_3);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(10, 10, 681, 20));
        splitter_3->setOrientation(Qt::Horizontal);
        lineEdit_7 = new QLineEdit(splitter_3);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        splitter_3->addWidget(lineEdit_7);
        lineEdit_10 = new QLineEdit(splitter_3);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));
        splitter_3->addWidget(lineEdit_10);
        lineEdit_9 = new QLineEdit(splitter_3);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        splitter_3->addWidget(lineEdit_9);
        lineEdit_8 = new QLineEdit(splitter_3);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        splitter_3->addWidget(lineEdit_8);
        label_7 = new QLabel(today_weight);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(510, 20, 161, 141));
        lineEdit_25 = new QLineEdit(today_weight);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));
        lineEdit_25->setGeometry(QRect(190, 10, 131, 51));
        lineEdit_25->setStyleSheet(QStringLiteral("background-color: rgb(255, 202, 210);"));
        futrue_weight = new QWidget(centralwidget);
        futrue_weight->setObjectName(QStringLiteral("futrue_weight"));
        futrue_weight->setGeometry(QRect(10, 480, 751, 171));
        futrue_weight->setStyleSheet(QLatin1String("border-radius: 20px;\n"
"background-color: rgb(255, 251, 252);"));
        widget_4 = new QWidget(futrue_weight);
        widget_4->setObjectName(QStringLiteral("widget_4"));
        widget_4->setGeometry(QRect(20, 40, 120, 131));
        label_2 = new QLabel(widget_4);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 0, 71, 61));
        textEdit = new QTextEdit(widget_4);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 70, 101, 51));
        widget_5 = new QWidget(futrue_weight);
        widget_5->setObjectName(QStringLiteral("widget_5"));
        widget_5->setGeometry(QRect(160, 40, 120, 131));
        label_3 = new QLabel(widget_5);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 0, 71, 61));
        textEdit_2 = new QTextEdit(widget_5);
        textEdit_2->setObjectName(QStringLiteral("textEdit_2"));
        textEdit_2->setGeometry(QRect(10, 70, 101, 51));
        widget_6 = new QWidget(futrue_weight);
        widget_6->setObjectName(QStringLiteral("widget_6"));
        widget_6->setGeometry(QRect(310, 40, 120, 131));
        label_4 = new QLabel(widget_6);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 0, 71, 61));
        textEdit_3 = new QTextEdit(widget_6);
        textEdit_3->setObjectName(QStringLiteral("textEdit_3"));
        textEdit_3->setGeometry(QRect(10, 70, 101, 51));
        widget_7 = new QWidget(futrue_weight);
        widget_7->setObjectName(QStringLiteral("widget_7"));
        widget_7->setGeometry(QRect(460, 40, 120, 131));
        label_5 = new QLabel(widget_7);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 0, 71, 61));
        textEdit_4 = new QTextEdit(widget_7);
        textEdit_4->setObjectName(QStringLiteral("textEdit_4"));
        textEdit_4->setGeometry(QRect(10, 70, 101, 51));
        widget_8 = new QWidget(futrue_weight);
        widget_8->setObjectName(QStringLiteral("widget_8"));
        widget_8->setGeometry(QRect(600, 40, 121, 131));
        label_6 = new QLabel(widget_8);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 0, 71, 61));
        textEdit_5 = new QTextEdit(widget_8);
        textEdit_5->setObjectName(QStringLiteral("textEdit_5"));
        textEdit_5->setGeometry(QRect(10, 70, 101, 51));
        lineEdit_20 = new QLineEdit(futrue_weight);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));
        lineEdit_20->setGeometry(QRect(40, 10, 101, 25));
        lineEdit_21 = new QLineEdit(futrue_weight);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));
        lineEdit_21->setGeometry(QRect(180, 10, 101, 25));
        lineEdit_22 = new QLineEdit(futrue_weight);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));
        lineEdit_22->setGeometry(QRect(320, 10, 101, 25));
        lineEdit_23 = new QLineEdit(futrue_weight);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));
        lineEdit_23->setGeometry(QRect(480, 10, 101, 25));
        lineEdit_24 = new QLineEdit(futrue_weight);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));
        lineEdit_24->setGeometry(QRect(610, 10, 101, 25));
        WeatherWindow->setCentralWidget(centralwidget);

        retranslateUi(WeatherWindow);

        QMetaObject::connectSlotsByName(WeatherWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WeatherWindow)
    {
        WeatherWindow->setWindowTitle(QApplication::translate("WeatherWindow", "MainWindow", Q_NULLPTR));
        pushButton->setText(QApplication::translate("WeatherWindow", "<", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("WeatherWindow", "\345\237\216\345\270\202", Q_NULLPTR));
        search_button->setText(QString());
#ifndef QT_NO_SHORTCUT
        search_button->setShortcut(QApplication::translate("WeatherWindow", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        wea_icon->setText(QApplication::translate("WeatherWindow", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("WeatherWindow", "-", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("WeatherWindow", "\303\227", Q_NULLPTR));
        lineEdit_2->setText(QString());
        label->setText(QApplication::translate("WeatherWindow", "\345\244\251\346\260\224\345\233\276\346\240\207", Q_NULLPTR));
        lineEdit_3->setText(QString());
        lineEdit_4->setText(QString());
        lineEdit_5->setText(QString());
        lineEdit_6->setText(QString());
        lineEdit_7->setText(QApplication::translate("WeatherWindow", "\347\251\272\346\260\224\350\264\250\351\207\217", Q_NULLPTR));
        lineEdit_10->setText(QApplication::translate("WeatherWindow", "pm2.5", Q_NULLPTR));
        lineEdit_9->setText(QApplication::translate("WeatherWindow", "\346\271\277\345\272\246", Q_NULLPTR));
        lineEdit_8->setText(QApplication::translate("WeatherWindow", "\351\243\216\351\200\237", Q_NULLPTR));
        label_7->setText(QApplication::translate("WeatherWindow", "TextLabel", Q_NULLPTR));
        lineEdit_25->setText(QString());
        label_2->setText(QApplication::translate("WeatherWindow", "TextLabel", Q_NULLPTR));
        label_3->setText(QApplication::translate("WeatherWindow", "TextLabel", Q_NULLPTR));
        label_4->setText(QApplication::translate("WeatherWindow", "TextLabel", Q_NULLPTR));
        label_5->setText(QApplication::translate("WeatherWindow", "TextLabel", Q_NULLPTR));
        label_6->setText(QApplication::translate("WeatherWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WeatherWindow: public Ui_WeatherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WEATHERWINDOW_H
