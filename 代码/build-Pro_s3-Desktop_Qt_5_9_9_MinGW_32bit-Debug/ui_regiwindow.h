/********************************************************************************
** Form generated from reading UI file 'regiwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIWINDOW_H
#define UI_REGIWINDOW_H

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

class Ui_RegiWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_2;

    void setupUi(QMainWindow *RegiWindow)
    {
        if (RegiWindow->objectName().isEmpty())
            RegiWindow->setObjectName(QStringLiteral("RegiWindow"));
        RegiWindow->resize(660, 538);
        RegiWindow->setStyleSheet(QLatin1String("#MainWindow{\n"
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
"\n"
"QPushButton{\n"
"	background:#1e1d1d;\n"
"	border-radius:8px;\n"
"	font-size: 24px ;\n"
"	font-family: Microsoft YaHei ;\n"
"	color: rgb(200,200,200); \n"
"	background:rgba(20,20,20,90%)\n"
"}\n"
"\n"
"#pushButton{\n"
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
""
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
"	border-color: rgb(20,20,20);\n"
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
"	font-size: 24px "
                        ";\n"
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
        centralwidget = new QWidget(RegiWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(180, 240, 291, 61));
        lineEdit->setClearButtonEnabled(true);
        lineEdit_2 = new QLineEdit(centralwidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(180, 308, 291, 61));
        lineEdit_2->setClearButtonEnabled(true);
        lineEdit_3 = new QLineEdit(centralwidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(180, 376, 291, 61));
        lineEdit_3->setClearButtonEnabled(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(260, 60, 111, 111));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(250, 460, 151, 51));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(0, 0, 51, 31));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(570, 0, 43, 31));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(618, 0, 41, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 180, 131, 41));
        label_2->setStyleSheet(QLatin1String("font-size: 20px ;\n"
""));
        RegiWindow->setCentralWidget(centralwidget);

        retranslateUi(RegiWindow);

        QMetaObject::connectSlotsByName(RegiWindow);
    } // setupUi

    void retranslateUi(QMainWindow *RegiWindow)
    {
        RegiWindow->setWindowTitle(QApplication::translate("RegiWindow", "MainWindow", Q_NULLPTR));
        lineEdit->setPlaceholderText(QApplication::translate("RegiWindow", "Username", Q_NULLPTR));
        lineEdit_2->setPlaceholderText(QApplication::translate("RegiWindow", "Passwd", Q_NULLPTR));
        lineEdit_3->setPlaceholderText(QApplication::translate("RegiWindow", "Tel", Q_NULLPTR));
        label->setText(QApplication::translate("RegiWindow", "TextLabel", Q_NULLPTR));
        pushButton->setText(QApplication::translate("RegiWindow", "\346\263\250\345\206\214", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("RegiWindow", "<", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("RegiWindow", "-", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("RegiWindow", "\303\227", Q_NULLPTR));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class RegiWindow: public Ui_RegiWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIWINDOW_H
