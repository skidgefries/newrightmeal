/********************************************************************************
** Form generated from reading UI file 'basicinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BASICINFO_H
#define UI_BASICINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_basicinfo
{
public:
    QFrame *frame_17;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_8;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_3;
    QFrame *frame_7;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QFrame *frame_9;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QFrame *frame_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_7;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_9;
    QComboBox *comboBox;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QFrame *frame_13;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *lineEdit_3;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_12;
    QComboBox *comboBox_2;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *comboBox_3;
    QFrame *frame_6;
    QHBoxLayout *horizontalLayout_14;
    QComboBox *comboBox_4;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;

    void setupUi(QDialog *basicinfo)
    {
        if (basicinfo->objectName().isEmpty())
            basicinfo->setObjectName("basicinfo");
        basicinfo->resize(1000, 700);
        basicinfo->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
"\n"
"QPushButton {background: #cc7f63;}\n"
"\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"\n"
"QLabel {font:  #c9563c;}\n"
"\n"
"QTextEdit {font: #161514;}"));
        frame_17 = new QFrame(basicinfo);
        frame_17->setObjectName("frame_17");
        frame_17->setGeometry(QRect(399, 452, 151, 100));
        frame_17->setMaximumSize(QSize(16777215, 100));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_17);
        verticalLayout_4->setObjectName("verticalLayout_4");
        pushButton = new QPushButton(frame_17);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        pushButton->setFont(font);

        verticalLayout_4->addWidget(pushButton);

        pushButton_3 = new QPushButton(frame_17);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setMaximumSize(QSize(150, 16777215));
        pushButton_3->setFont(font);

        verticalLayout_4->addWidget(pushButton_3);

        frame = new QFrame(basicinfo);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(175, 130, 600, 322));
        frame->setMinimumSize(QSize(600, 0));
        frame->setMaximumSize(QSize(500, 16777215));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_3);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_8 = new QFrame(frame_3);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_8);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_2 = new QLabel(frame_8);
        label_2->setObjectName("label_2");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        label_2->setFont(font1);

        horizontalLayout_8->addWidget(label_2);


        verticalLayout_2->addWidget(frame_8);

        frame_11 = new QFrame(frame_3);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_11);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_3 = new QLabel(frame_11);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        horizontalLayout_7->addWidget(label_3);


        verticalLayout_2->addWidget(frame_11);

        frame_7 = new QFrame(frame_3);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_7);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(frame_7);
        label_4->setObjectName("label_4");
        label_4->setFont(font1);

        horizontalLayout_6->addWidget(label_4);


        verticalLayout_2->addWidget(frame_7);

        frame_9 = new QFrame(frame_3);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_9);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_5 = new QLabel(frame_9);
        label_5->setObjectName("label_5");
        label_5->setFont(font1);

        horizontalLayout_5->addWidget(label_5);


        verticalLayout_2->addWidget(frame_9);

        frame_10 = new QFrame(frame_3);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_10);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_6 = new QLabel(frame_10);
        label_6->setObjectName("label_6");
        label_6->setFont(font1);

        horizontalLayout_4->addWidget(label_6);


        verticalLayout_2->addWidget(frame_10);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_7 = new QLabel(frame_5);
        label_7->setObjectName("label_7");
        label_7->setFont(font1);

        horizontalLayout_3->addWidget(label_7);


        verticalLayout_2->addWidget(frame_5);


        horizontalLayout->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setMinimumSize(QSize(450, 0));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_4);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_12 = new QFrame(frame_4);
        frame_12->setObjectName("frame_12");
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_12);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        comboBox = new QComboBox(frame_12);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setMinimumSize(QSize(200, 0));
        comboBox->setFont(font);
        comboBox->setStyleSheet(QString::fromUtf8("QComboBox{background:#ffffff};"));

        horizontalLayout_9->addWidget(comboBox, 0, Qt::AlignLeft);


        verticalLayout_3->addWidget(frame_12);

        frame_16 = new QFrame(frame_4);
        frame_16->setObjectName("frame_16");
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_16);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        lineEdit = new QLineEdit(frame_16);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setFont(font);

        horizontalLayout_10->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(frame_16);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setFont(font);

        horizontalLayout_10->addWidget(lineEdit_2);


        verticalLayout_3->addWidget(frame_16);

        frame_13 = new QFrame(frame_4);
        frame_13->setObjectName("frame_13");
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_13);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        lineEdit_3 = new QLineEdit(frame_13);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setFont(font);

        horizontalLayout_11->addWidget(lineEdit_3);


        verticalLayout_3->addWidget(frame_13);

        frame_14 = new QFrame(frame_4);
        frame_14->setObjectName("frame_14");
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_14);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        comboBox_2 = new QComboBox(frame_14);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setMinimumSize(QSize(200, 0));
        comboBox_2->setFont(font);
        comboBox_2->setStyleSheet(QString::fromUtf8("QComboBox{background:#ffffff};"));

        horizontalLayout_12->addWidget(comboBox_2, 0, Qt::AlignLeft);


        verticalLayout_3->addWidget(frame_14);

        frame_15 = new QFrame(frame_4);
        frame_15->setObjectName("frame_15");
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_15);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        comboBox_3 = new QComboBox(frame_15);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setMinimumSize(QSize(200, 0));
        comboBox_3->setFont(font);
        comboBox_3->setStyleSheet(QString::fromUtf8("QComboBox{background:#ffffff};"));

        horizontalLayout_13->addWidget(comboBox_3, 0, Qt::AlignLeft);


        verticalLayout_3->addWidget(frame_15);

        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setFont(font);
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_6);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        comboBox_4 = new QComboBox(frame_6);
        comboBox_4->addItem(QString());
        comboBox_4->addItem(QString());
        comboBox_4->setObjectName("comboBox_4");
        comboBox_4->setMinimumSize(QSize(200, 0));
        comboBox_4->setFont(font);
        comboBox_4->setStyleSheet(QString::fromUtf8("QComboBox{background:#ffffff};"));

        horizontalLayout_14->addWidget(comboBox_4, 0, Qt::AlignLeft);


        verticalLayout_3->addWidget(frame_6);


        horizontalLayout->addWidget(frame_4);

        frame_2 = new QFrame(basicinfo);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(350, 30, 249, 100));
        frame_2->setMaximumSize(QSize(1000, 100));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_2);
        label->setObjectName("label");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(36);
        font2.setBold(false);
        font2.setItalic(false);
        label->setFont(font2);

        horizontalLayout_2->addWidget(label);


        retranslateUi(basicinfo);

        QMetaObject::connectSlotsByName(basicinfo);
    } // setupUi

    void retranslateUi(QDialog *basicinfo)
    {
        basicinfo->setWindowTitle(QCoreApplication::translate("basicinfo", "Dialog", nullptr));
        pushButton->setText(QCoreApplication::translate("basicinfo", "Calculate BodyFat", nullptr));
        pushButton_3->setText(QCoreApplication::translate("basicinfo", "Continue", nullptr));
        label_2->setText(QCoreApplication::translate("basicinfo", "Gender", nullptr));
        label_3->setText(QCoreApplication::translate("basicinfo", "Height", nullptr));
        label_4->setText(QCoreApplication::translate("basicinfo", "Weight", nullptr));
        label_5->setText(QCoreApplication::translate("basicinfo", "Body Fat", nullptr));
        label_6->setText(QCoreApplication::translate("basicinfo", "Activity Level", nullptr));
        label_7->setText(QCoreApplication::translate("basicinfo", "Diet Type", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("basicinfo", "Male", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("basicinfo", "Female", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("basicinfo", "Others", nullptr));

        lineEdit->setPlaceholderText(QCoreApplication::translate("basicinfo", "in ft", nullptr));
        lineEdit_2->setPlaceholderText(QCoreApplication::translate("basicinfo", "in inches", nullptr));
        lineEdit_3->setPlaceholderText(QCoreApplication::translate("basicinfo", "in kg", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("basicinfo", "Low", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("basicinfo", "Medium", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("basicinfo", "High", nullptr));

        comboBox_3->setItemText(0, QCoreApplication::translate("basicinfo", "Low", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("basicinfo", "Medium", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("basicinfo", "High", nullptr));

        comboBox_4->setItemText(0, QCoreApplication::translate("basicinfo", "Vegetarian", nullptr));
        comboBox_4->setItemText(1, QCoreApplication::translate("basicinfo", "Non-Vegetarian", nullptr));

        label->setText(QCoreApplication::translate("basicinfo", "<html><head/><body><p align=\"center\">Basic Info</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class basicinfo: public Ui_basicinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BASICINFO_H
