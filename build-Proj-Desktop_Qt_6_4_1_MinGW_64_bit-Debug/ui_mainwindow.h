/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_pix;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_10;
    QLabel *label;
    QLabel *lbbl;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit_5;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_6;
    QPushButton *pushButton_2;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QPushButton *pushButton_9;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(451, 501);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
"QPushButton {background: #cc7f63;}\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"QLabel {font:  #000000;}\n"
"QLineEdit {font: #161514;}\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(0, 170));
        frame->setMaximumSize(QSize(16777215, 200));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame_8 = new QFrame(frame);
        frame_8->setObjectName("frame_8");
        frame_8->setMaximumSize(QSize(150, 150));
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_8);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_pix = new QLabel(frame_8);
        label_pix->setObjectName("label_pix");
        label_pix->setMaximumSize(QSize(220, 200));
        label_pix->setPixmap(QPixmap(QString::fromUtf8(":/img/logo")));
        label_pix->setScaledContents(true);

        horizontalLayout_6->addWidget(label_pix);


        horizontalLayout_5->addWidget(frame_8);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName("frame_9");
        frame_9->setMinimumSize(QSize(270, 0));
        frame_9->setMaximumSize(QSize(16777215, 150));
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_9);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_9);
        label->setObjectName("label");
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(0, 100));
        label->setMaximumSize(QSize(16777215, 50));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_10->addWidget(label, 0, Qt::AlignBottom);

        lbbl = new QLabel(frame_9);
        lbbl->setObjectName("lbbl");
        sizePolicy.setHeightForWidth(lbbl->sizePolicy().hasHeightForWidth());
        lbbl->setSizePolicy(sizePolicy);
        lbbl->setMaximumSize(QSize(16777215, 50));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(16);
        font1.setBold(false);
        font1.setItalic(false);
        lbbl->setFont(font1);
        lbbl->setStyleSheet(QString::fromUtf8("QLabel {font: #e9583f;}\n"
"QLabel{color:#ea5a3f;}"));
        lbbl->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        verticalLayout_10->addWidget(lbbl, 0, Qt::AlignBottom);


        horizontalLayout_5->addWidget(frame_9, 0, Qt::AlignHCenter|Qt::AlignVCenter);


        verticalLayout->addWidget(frame);

        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 200));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setMaximumSize(QSize(16777215, 40));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_4);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(frame_4);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setMinimumSize(QSize(400, 0));
        lineEdit_5->setMaximumSize(QSize(400, 16777215));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setBold(false);
        font2.setItalic(false);
        lineEdit_5->setFont(font2);

        horizontalLayout_2->addWidget(lineEdit_5);


        verticalLayout_2->addWidget(frame_4, 0, Qt::AlignLeft);

        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setEnabled(true);
        frame_5->setMaximumSize(QSize(16777215, 40));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_5);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_6 = new QLineEdit(frame_5);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setMinimumSize(QSize(400, 0));
        lineEdit_6->setMaximumSize(QSize(2000, 16777215));
        lineEdit_6->setFont(font2);
        lineEdit_6->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEdit_6, 0, Qt::AlignLeft);

        pushButton_2 = new QPushButton(frame_5);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setMinimumSize(QSize(25, 0));
        pushButton_2->setMaximumSize(QSize(20, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout_2->addWidget(frame_5, 0, Qt::AlignHCenter);

        frame_6 = new QFrame(frame_2);
        frame_6->setObjectName("frame_6");
        frame_6->setMinimumSize(QSize(0, 100));
        frame_6->setMaximumSize(QSize(16777215, 100));
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_6);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(frame_6);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(200, 0));
        pushButton->setMaximumSize(QSize(200, 16777215));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        pushButton->setFont(font3);

        verticalLayout_3->addWidget(pushButton);

        pushButton_8 = new QPushButton(frame_6);
        pushButton_8->setObjectName("pushButton_8");
        pushButton_8->setMinimumSize(QSize(200, 0));
        pushButton_8->setMaximumSize(QSize(200, 16777215));
        pushButton_8->setFont(font3);

        verticalLayout_3->addWidget(pushButton_8);


        verticalLayout_2->addWidget(frame_6, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(frame_2, 0, Qt::AlignHCenter);

        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName("frame_3");
        frame_3->setMaximumSize(QSize(16777215, 120));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_3);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_3);
        label_3->setObjectName("label_3");
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setMaximumSize(QSize(16777215, 20));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setItalic(false);
        label_3->setFont(font4);

        verticalLayout_9->addWidget(label_3, 0, Qt::AlignHCenter);

        pushButton_9 = new QPushButton(frame_3);
        pushButton_9->setObjectName("pushButton_9");
        pushButton_9->setMinimumSize(QSize(200, 0));
        pushButton_9->setMaximumSize(QSize(100, 16777215));
        pushButton_9->setFont(font3);

        verticalLayout_9->addWidget(pushButton_9, 0, Qt::AlignHCenter);


        verticalLayout->addWidget(frame_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_pix->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "RightMeal", nullptr));
        lbbl->setText(QCoreApplication::translate("MainWindow", "  Light Bite, Better Life", nullptr));
        lineEdit_5->setPlaceholderText(QCoreApplication::translate("MainWindow", "Username", nullptr));
        lineEdit_6->setPlaceholderText(QCoreApplication::translate("MainWindow", "Password", nullptr));
        pushButton_2->setText(QString());
        pushButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "Forgot Password", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Don't have an account?", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "Sign Up", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
