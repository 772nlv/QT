/********************************************************************************
** Form generated from reading UI file 'mymusicwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMUSICWINDOW_H
#define UI_MYMUSICWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMusicWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QWidget *widget;
    QPushButton *front_music;
    QPushButton *next_music;
    QPushButton *play_button;
    QSlider *horizontalSlider;
    QLabel *label_4;
    QLabel *label;
    QLabel *cover_label;
    QLabel *singgername;
    QLabel *songname;
    QPushButton *pushButton_5;
    QWidget *widget_2;
    QPushButton *like_button;
    QPushButton *reco_button;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QLabel *label_2;

    void setupUi(QMainWindow *MyMusicWindow)
    {
        if (MyMusicWindow->objectName().isEmpty())
            MyMusicWindow->setObjectName(QStringLiteral("MyMusicWindow"));
        MyMusicWindow->resize(862, 731);
        MyMusicWindow->setStyleSheet(QString::fromUtf8("#centralwidget{\n"
"	background:rgba(255,255,255,100%);\n"
"	border-radius:20px;\n"
"	background-color: rgb(140, 140, 140);\n"
"}\n"
"#pushButton{\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"}\n"
"\n"
"#MyMusicWindow{\n"
"border-radius:15px;\n"
"}\n"
"#widget{\n"
"	border-radius:15px;\n"
"	background:rgba(70,70,70,80%)\n"
"}\n"
"QLineEdit{\n"
"	border-radius:15px;\n"
"	background:#1e1d1d;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	background:rgba(40,40,40,80%);\n"
"	color: rgb(200,200,200); \n"
"	padding-left: 15px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	color: rgb(255,255,255); \n"
"    background-color: rgb(45,45,45);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(20,20,20);\n"
"}\n"
"#widget_2{\n"
"	border-radius:15px;\n"
"	background:rgba(70,70,70,80%)\n"
"}\n"
"#widget_3{\n"
"	border-radius:15px;\n"
"	background:rgba(70,70,70,80"
                        "%)\n"
"}\n"
"#search{\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(40,40,40,80%)\n"
"\n"
"}\n"
"#search:hover{\n"
"	color: rgb(255,255,255); \n"
"    background-color: rgb(45,45,45);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(20,20,20);\n"
"}\n"
"#search:pressed {\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(255,255,255); \n"
"	background:rgba(20,20,20,90%)\n"
"}\n"
"\n"
"QTableView{  \n"
"	background-color: rgba(70,70,70,80%);\n"
"    border: none;\n"
"    selection-background-color: rgba(80, 80, 80,80%);\n"
"	font-size: 25px;\n"
"	font-family: Microsoft YaHei ;\n"
"}\n"
"QHeaderView::section{         /*\350\241\250\345\244\264\350\256\276\347\275\256*/\n"
"    height:50px;    			/*\350\241\250\345\244\264\351\253\230\345\272\246*/\n"
"    color: white;\n"
"    font-size: 30px;\n"
"    f"
                        "ont-weight: 900;\n"
"	font-family: Microsoft YaHei ;\n"
"    background-color: rgba(130, 130, 130,80%);\n"
"    text-align: center;\n"
"	border: 1px solid rgb(100,100,100);\n"
"}\n"
"\n"
"QTableView::item:!alternate:!focus{\n"
"    background-color: rgba(200, 200, 200,80%);    /*\344\272\244\346\233\277\350\241\214\347\232\204\345\217\246\344\270\200\351\242\234\350\211\262*/\n"
"    selection-color: rgba(0, 0, 0,80%);\n"
"	border: 1px solid rgb(100,100,100);\n"
"}\n"
"QTableView::item:alternate:!focus{\n"
"    background-color: rgba(130, 130, 130,80%);\n"
"	selection-color: rgba(0, 0, 0,80%);\n"
"	border: 1px solid rgb(100,100,100);\n"
"}\n"
"\n"
"QScrollBar:vertical{ \n"
"	width:20px;\n"
"	background-color:rgba(150, 150, 150,80%);/*\345\236\202\347\233\264\346\273\232\345\212\250\346\235\241 \350\203\214\346\231\257 \351\242\234\350\211\262*/\n"
"	margin:1px ;\n"
"	border:1px solid rgb(100,100,100);/*\350\276\271\346\241\206\351\242\234\350\211\262*/\n"
"	padding-top:22px;\n"
"	padding-bottom:22px;\n"
"}\n"
""
                        "\n"
"QScrollBar::handle:vertical{\n"
" \n"
"	background:rgba(200, 200, 200,80%);\n"
"	min-height:50px;\n"
" 	border:1px solid rgb(255,255,255)\n"
"}\n"
"\n"
"QScrollBar::add-page:vertical{\n"
" 	background:rgba(100, 100, 100,80%);\n"
"	min-height:50px;\n"
" 	border:1px solid rgb(100,100,100)\n"
"}\n"
"\n"
"\n"
"QScrollBar::sub-page:vertical{\n"
"	background:rgba(100, 100, 100,80%);\n"
"	min-height:50px;\n"
" 	border:1px solid rgb(100,100,100)\n"
" \n"
"}\n"
"\n"
"#play_menu{\n"
"	border-radius:15px;\n"
"	background:rgba(60,60,60,80%)\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"border: 0px solid #bbb;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal {\n"
"	background: rgb(100,100,100,80%);\n"
"	border: 0px solid #777;\n"
"	border-radius: 2px;\n"
"	margin-top:15px;\n"
"	margin-bottom:15px;\n"
"}\n"
"\n"
"QSlider::add-page:horizontal {\n"
"	background: rgb(200,200,200,80%);\n"
"	border: 0px solid #777;\n"
"	border-radius: 2px;\n"
"	margin-top:15px;\n"
"	margin-bottom:15px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal"
                        " {\n"
" 	width: 10px;\n"
" 	background-color: #585858;\n"
" 	margin-top:10px;\n"
" 	margin-bottom:10px;\n"
"	border-radius: 100px; \n"
"	border: 1px solid rgb(150,150,150);\n"
"}\n"
"QSlider::handle:horizontal:hover {\n"
" 	width: 15px;\n"
" 	background-color: #585858;\n"
" 	margin-top:5px;\n"
" 	margin-bottom:5px;\n"
"	border-radius: 100px; \n"
"	border: 1px solid rgb(150,150,150);\n"
" \n"
"}\n"
"#label{\n"
"	border-radius: 25px; \n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MyMusicWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(249, 110, 601, 481));
        tableView->setContextMenuPolicy(Qt::ActionsContextMenu);
        tableView->setStyleSheet(QStringLiteral("border-radius:15px;"));
        tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableView->setShowGrid(false);
        tableView->setGridStyle(Qt::NoPen);
        tableView->setWordWrap(false);
        tableView->setCornerButtonEnabled(false);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setHighlightSections(true);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 0, 31, 31));
        pushButton_2->setStyleSheet(QLatin1String("#pushButton_2{\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"}"));
        widget = new QWidget(centralwidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(0, 610, 861, 121));
        front_music = new QPushButton(widget);
        front_music->setObjectName(QStringLiteral("front_music"));
        front_music->setGeometry(QRect(420, 20, 50, 50));
        front_music->setMaximumSize(QSize(50, 50));
        front_music->setStyleSheet(QLatin1String("#front_music{\n"
"	image: url(:/png/front_normal.png);\n"
"	border-radius:30px;\n"
"}\n"
"#front_music:hover{\n"
"\n"
"	image: url(:/png/front_hover.png);\n"
"	border-radius:30px;\n"
"}\n"
"#front_music:pressed{\n"
"	image: url(:/png/front_pressed.png);\n"
"	border-radius:30px;\n"
"}\n"
""));
        next_music = new QPushButton(widget);
        next_music->setObjectName(QStringLiteral("next_music"));
        next_music->setGeometry(QRect(580, 20, 50, 50));
        next_music->setMaximumSize(QSize(50, 50));
        next_music->setStyleSheet(QLatin1String("#next_music{\n"
"	image: url(:/png/next_normal.png);\n"
"	border-radius:30px;\n"
"}\n"
"#next_music:hover{\n"
"	image: url(:/png/next_hover.png);\n"
"	border-radius:30px;\n"
"}\n"
"#next_music:pressed{\n"
"	image: url(:/png/next_pressed.png);\n"
"	border-radius:30px;\n"
"}"));
        play_button = new QPushButton(widget);
        play_button->setObjectName(QStringLiteral("play_button"));
        play_button->setGeometry(QRect(490, 10, 70, 70));
        play_button->setMaximumSize(QSize(70, 70));
        play_button->setStyleSheet(QLatin1String("#play_button{\n"
"	image: url(:/png/play_normal.png);\n"
"	border-radius:30px;\n"
"}\n"
"#play_button:hover{\n"
"	image: url(:/png/play_hover.png);\n"
"	border-radius:30px;\n"
"}\n"
"#play_button:pressed{\n"
"	image: url(:/png/play_pressed.png);\n"
"	border-radius:30px;\n"
"}\n"
""));
        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(309, 70, 411, 31));
        horizontalSlider->setPageStep(10);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::NoTicks);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(270, 60, 61, 51));
        label_4->setMaximumSize(QSize(64, 16777215));
        label_4->setStyleSheet(QStringLiteral("color: rgb(253, 253, 253);"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(730, 70, 64, 32));
        label->setMinimumSize(QSize(64, 32));
        label->setMaximumSize(QSize(64, 32));
        label->setStyleSheet(QStringLiteral("color: rgb(249, 249, 249);"));
        cover_label = new QLabel(widget);
        cover_label->setObjectName(QStringLiteral("cover_label"));
        cover_label->setGeometry(QRect(10, 10, 100, 100));
        cover_label->setMaximumSize(QSize(100, 100));
        singgername = new QLabel(widget);
        singgername->setObjectName(QStringLiteral("singgername"));
        singgername->setGeometry(QRect(120, 70, 181, 31));
        singgername->setStyleSheet(QStringLiteral("color: rgb(247, 247, 247);"));
        songname = new QLabel(widget);
        songname->setObjectName(QStringLiteral("songname"));
        songname->setGeometry(QRect(120, 30, 161, 31));
        songname->setStyleSheet(QStringLiteral("color: rgb(249, 249, 249);"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(360, 20, 41, 41));
        pushButton_5->setStyleSheet(QLatin1String("#pushButton_5{\n"
"	image: url(:/png/coll_normal1.png);\n"
"	border-radius:30px;\n"
"}\n"
"#pushButton_5:hover{\n"
"	\n"
"	image: url(:/png/coll_hover.png);\n"
"	border-radius:30px;\n"
"}\n"
"#pushButton_5:pressed{\n"
"	image: url(:/png/colled.png);\n"
"	border-radius:30px;\n"
"}"));
        widget_2 = new QWidget(centralwidget);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setGeometry(QRect(0, 110, 221, 481));
        like_button = new QPushButton(widget_2);
        like_button->setObjectName(QStringLiteral("like_button"));
        like_button->setGeometry(QRect(0, 0, 221, 61));
        like_button->setStyleSheet(QLatin1String("#like_button{\n"
"	border-radius:15px;\n"
"	background:#1e1d1d;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	background:rgba(40,40,40,80%);\n"
"	color: rgb(200,200,200); \n"
"	padding-left: 15px;\n"
"}\n"
"#like_button:hover\n"
"{\n"
"	color: rgb(255,255,255); \n"
"    background-color: rgb(45,45,45);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(20,20,20);\n"
"}"));
        reco_button = new QPushButton(widget_2);
        reco_button->setObjectName(QStringLiteral("reco_button"));
        reco_button->setGeometry(QRect(0, 70, 221, 61));
        reco_button->setStyleSheet(QLatin1String("#reco_button{\n"
"	border-radius:15px;\n"
"	background:#1e1d1d;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	background:rgba(40,40,40,80%);\n"
"	color: rgb(200,200,200); \n"
"	padding-left: 15px;\n"
"}\n"
"\n"
"#reco_button:hover\n"
"{\n"
"	color: rgb(255,255,255); \n"
"    background-color: rgb(45,45,45);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(20,20,20);\n"
"}"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(279, 40, 451, 51));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(740, 40, 111, 51));
        pushButton->setMaximumSize(QSize(150, 16777215));
        pushButton->setStyleSheet(QLatin1String("#pushButton{\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"\n"
"}"));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(780, 0, 31, 21));
        pushButton_4->setStyleSheet(QLatin1String("#pushButton_4{\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(820, 0, 31, 21));
        pushButton_3->setStyleSheet(QLatin1String("#pushButton_3{\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 40, 211, 51));
        MyMusicWindow->setCentralWidget(centralwidget);

        retranslateUi(MyMusicWindow);

        QMetaObject::connectSlotsByName(MyMusicWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMusicWindow)
    {
        MyMusicWindow->setWindowTitle(QApplication::translate("MyMusicWindow", "MainWindow", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MyMusicWindow", "<", Q_NULLPTR));
        front_music->setText(QString());
        next_music->setText(QString());
        play_button->setText(QString());
        label_4->setText(QApplication::translate("MyMusicWindow", "TextLabel", Q_NULLPTR));
        label->setText(QApplication::translate("MyMusicWindow", "TextLabel", Q_NULLPTR));
        cover_label->setText(QApplication::translate("MyMusicWindow", "TextLabel", Q_NULLPTR));
        singgername->setText(QApplication::translate("MyMusicWindow", "--", Q_NULLPTR));
        songname->setText(QApplication::translate("MyMusicWindow", "--", Q_NULLPTR));
        pushButton_5->setText(QString());
        like_button->setText(QApplication::translate("MyMusicWindow", "\346\210\221\345\226\234\346\254\242\347\232\204\351\237\263\344\271\220 ", Q_NULLPTR));
        reco_button->setText(QApplication::translate("MyMusicWindow", "\344\273\212\346\227\245\346\216\250\350\215\220  ", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QApplication::translate("MyMusicWindow", "\350\257\267\350\276\223\345\205\245\346\255\214\345\220\215\346\210\226\350\200\205\346\255\214\346\211\213", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MyMusicWindow", "\346\220\234\347\264\242", Q_NULLPTR));
#ifndef QT_NO_SHORTCUT
        pushButton->setShortcut(QApplication::translate("MyMusicWindow", "Return", Q_NULLPTR));
#endif // QT_NO_SHORTCUT
        pushButton_4->setText(QApplication::translate("MyMusicWindow", "-", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MyMusicWindow", "\303\227", Q_NULLPTR));
        label_2->setText(QApplication::translate("MyMusicWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MyMusicWindow: public Ui_MyMusicWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMUSICWINDOW_H
