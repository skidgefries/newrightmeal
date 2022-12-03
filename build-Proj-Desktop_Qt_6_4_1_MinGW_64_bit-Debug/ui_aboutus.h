/********************************************************************************
** Form generated from reading UI file 'aboutus.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTUS_H
#define UI_ABOUTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(765, 600);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color : #e0d3b6;"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(340, 60, 101, 81));
        label->setStyleSheet(QString::fromUtf8("font: 9pt \"Segoe UI\";\n"
"font: 18pt \"  #c9563c \";\n"
"color: rgb(0, 0, 0);"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 150, 701, 151));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(7, 7, 7);\n"
"font: 9pt \"Segoe UI\";\n"
"font: 12pt \"font:  #c9563c\";"));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 350, 371, 191));
        label_3->setStyleSheet(QString::fromUtf8("color: rgb(13, 13, 13);\n"
"font: 12pt \" #c9563c\";"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(580, 510, 83, 29));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: #cc7f63;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 765, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "About Us", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "RightMeal is a fitness application developed by first year Computer Engineering students\n"
"of Kathmandu University batch 2021 used to create a personalized diet plan.", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Contact Us \342\234\211\n"
"\n"
"abhyu.adhikari@gmail.com\n"
"saumyashrestha3112@gmail.com\n"
"supriya.adh@gmail.com\n"
"mahirmanandhar02@gmail.com\n"
"sasadhungana510@gmail.com", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", " back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTUS_H
