/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_5;
    QLabel *label_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(802, 553);
        MainWindow->setStyleSheet(QLatin1String("#MainWindow{\n"
"	background-image: url(:/R-C.gif);\n"
"	background:rgba(255,255,255,100%);\n"
"	border-radius:20px;\n"
"}\n"
"#centralwidget{\n"
"	background:rgba(255,255,255,100%);\n"
"	border-radius:20px;\n"
"	background-color: rgb(140, 140, 140);\n"
"}\n"
"#GIFLabel{\n"
"	border-radius:20px;\n"
"background:rgb(25,25,25,80%)\n"
"}\n"
"#Frame{\n"
"	border-radius:15px;\n"
"	background:rgba(50,50,50,80%)\n"
"}\n"
"#Frame_gif{\n"
"	border-radius:20px;\n"
"	background:transparent;	\n"
"}\n"
"#pushButton_5{\n"
"	font-size: 14px 	;\n"
"	border: 0px;\n"
"	background:transparent;\n"
"	color: rgb(255, 255, 255);\n"
"	font-family: Microsoft YaHei ;\n"
"}\n"
"#pushButton_5:hover{\n"
"		color: rgb(255,255,255); \n"
"    background-color: rgb(156, 156, 156);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(20,20,20);\n"
"	border-radius:15px;\n"
"}\n"
"\n"
"#pushButton_5:pressed {\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(255,255,255); \n"
""
                        "	background:rgba(20,20,20,90%)\n"
"}\n"
"QPushButton{\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"\n"
"}\n"
"#pushButton:hover{\n"
"	color: rgb(255,255,255); \n"
"    background-color: rgb(45,45,45);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(20,20,20);\n"
"}\n"
"#pushButton:pressed {\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(255,255,255); \n"
"	background:rgba(20,20,20,90%)\n"
"}\n"
"QLineEdit{\n"
"	border-radius:15px;\n"
"	background:#1e1d1d;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	background:rgba(20,20,20,90%);\n"
"	color: rgb(200,200,200); \n"
"	padding-left: 15px;\n"
"}\n"
"QLineEdit:hover\n"
"{\n"
"	color: rgb(255,255,255); \n"
"    background-color: rgb(45,45,45);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb("
                        "20,20,20);\n"
"}\n"
"#password_find{\n"
"	color: rgb(160,160,160); \n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	background:transparent;	\n"
"}\n"
"#password_find:hover{\n"
"	color: rgb(255,255,255); \n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"}\n"
"#password_find:pressed{\n"
"	color: rgb(160,160,160); \n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"}\n"
"#sign{\n"
"	color: rgb(160,160,160); \n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	background:transparent;	\n"
"}\n"
"#sign:hover{\n"
"	color: rgb(255,255,255); \n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;	\n"
"}\n"
"#sign:pressed{\n"
"	color: rgb(160,160,160); \n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(250, 250, 291, 61));
        lineEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        lineEdit->setClearButtonEnabled(true);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(250, 318, 291, 61));
        lineEdit_2->setClearButtonEnabled(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(340, 110, 100, 100));
        label->setMinimumSize(QSize(100, 100));
        label->setMaximumSize(QSize(100, 100));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(277, 400, 101, 51));
        pushButton->setStyleSheet(QStringLiteral(""));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(400, 400, 101, 51));
        pushButton_4->setStyleSheet(QLatin1String("QPushButton{\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"	color: rgb(255,255,255); \n"
"    background-color: rgb(45,45,45);\n"
"	border-style: solid;\n"
"	border-width: 2px;\n"
"	border-color: rgb(20,20,20);\n"
"}\n"
"QPushButton:pressed {\n"
"	background:#1e1d1d;\n"
"	border-radius:15px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(255,255,255); \n"
"	background:rgba(20,20,20,90%)\n"
"}"));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(740, 0, 28, 21));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(773, 0, 28, 21));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(330, 463, 111, 21));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei"));
        pushButton_5->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(310, 60, 211, 31));
        label_2->setStyleSheet(QLatin1String("font-size: 20px ;\n"
""));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("MainWindow", "Username", Q_NULLPTR));
        lineEdit_2->setText(QString());
        lineEdit_2->setPlaceholderText(QApplication::translate("MainWindow", "Passwd", Q_NULLPTR));
        label->setText(QString());
        pushButton->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainWindow", "\303\227", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("MainWindow", "\346\211\276\345\233\236\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
