/********************************************************************************
** Form generated from reading UI file 'caloriecalculator.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALORIECALCULATOR_H
#define UI_CALORIECALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_caloriecalculator
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_3;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_pix;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QCommandLinkButton *commandLinkButton_4;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QCommandLinkButton *commandLinkButton_9;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_4;
    QCommandLinkButton *commandLinkButton_10;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_5;
    QCommandLinkButton *commandLinkButton_11;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QCommandLinkButton *commandLinkButton_12;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_7;
    QCommandLinkButton *commandLinkButton_13;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_8;
    QCommandLinkButton *commandLinkButton_14;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_10;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_11;
    QFrame *frame_15;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QFrame *frame_19;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_6;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_24;
    QHBoxLayout *horizontalLayout_8;
    QComboBox *gender;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_9;
    QLineEdit *height_input;
    QFrame *frame_23;
    QHBoxLayout *horizontalLayout_10;
    QLineEdit *weight_input;
    QFrame *frame_22;
    QHBoxLayout *horizontalLayout_11;
    QLineEdit *age_input;
    QFrame *frame_21;
    QVBoxLayout *verticalLayout_13;
    QComboBox *activitylevel_input;
    QSpacerItem *verticalSpacer;
    QLineEdit *lineEdit;
    QFrame *frame_25;
    QVBoxLayout *verticalLayout_14;
    QPushButton *pushButton;

    void setupUi(QDialog *caloriecalculator)
    {
        if (caloriecalculator->objectName().isEmpty())
            caloriecalculator->setObjectName("caloriecalculator");
        caloriecalculator->resize(1000, 700);
        horizontalLayout = new QHBoxLayout(caloriecalculator);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(caloriecalculator);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(250, 16777215));
        frame->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
"QWidget {background: #e0d3b6;}\n"
"QFrame {background: rgb(238, 238, 236);}\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"QLabel {background: #e0d3b6;}\n"
"QLineEdit {font: #161514;}\n"
"\n"
"\n"
"\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setMinimumSize(QSize(0, 200));
        frame_3->setMaximumSize(QSize(16777215, 16777215));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_3);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_pix = new QLabel(frame_3);
        label_pix->setObjectName("label_pix");
        label_pix->setMaximumSize(QSize(16777215, 220));
        label_pix->setPixmap(QPixmap(QString::fromUtf8(":/img/logo")));
        label_pix->setScaledContents(true);

        verticalLayout_9->addWidget(label_pix);


        verticalLayout->addWidget(frame_3);

        frame_4 = new QFrame(frame);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_4 = new QCommandLinkButton(frame_4);
        commandLinkButton_4->setObjectName("commandLinkButton_4");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        font.setBold(false);
        commandLinkButton_4->setFont(font);

        verticalLayout_2->addWidget(commandLinkButton_4);


        verticalLayout->addWidget(frame_4);

        frame_5 = new QFrame(frame);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_9 = new QCommandLinkButton(frame_5);
        commandLinkButton_9->setObjectName("commandLinkButton_9");
        commandLinkButton_9->setFont(font);

        verticalLayout_3->addWidget(commandLinkButton_9);


        verticalLayout->addWidget(frame_5);

        frame_6 = new QFrame(frame);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_6);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_10 = new QCommandLinkButton(frame_6);
        commandLinkButton_10->setObjectName("commandLinkButton_10");
        commandLinkButton_10->setFont(font);

        verticalLayout_4->addWidget(commandLinkButton_10);


        verticalLayout->addWidget(frame_6);

        frame_7 = new QFrame(frame);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_7);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_11 = new QCommandLinkButton(frame_7);
        commandLinkButton_11->setObjectName("commandLinkButton_11");
        commandLinkButton_11->setFont(font);

        verticalLayout_5->addWidget(commandLinkButton_11);


        verticalLayout->addWidget(frame_7);

        frame_8 = new QFrame(frame);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_8);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_12 = new QCommandLinkButton(frame_8);
        commandLinkButton_12->setObjectName("commandLinkButton_12");
        commandLinkButton_12->setFont(font);

        verticalLayout_6->addWidget(commandLinkButton_12);


        verticalLayout->addWidget(frame_8);

        frame_9 = new QFrame(frame);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_9);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_13 = new QCommandLinkButton(frame_9);
        commandLinkButton_13->setObjectName("commandLinkButton_13");
        commandLinkButton_13->setFont(font);

        verticalLayout_7->addWidget(commandLinkButton_13);


        verticalLayout->addWidget(frame_9);

        frame_10 = new QFrame(frame);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_10);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_14 = new QCommandLinkButton(frame_10);
        commandLinkButton_14->setObjectName("commandLinkButton_14");
        commandLinkButton_14->setFont(font);

        verticalLayout_8->addWidget(commandLinkButton_14);


        verticalLayout->addWidget(frame_10);


        horizontalLayout->addWidget(frame);

        frame_2 = new QFrame(caloriecalculator);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 0));
        frame_2->setMaximumSize(QSize(16777215, 16777215));
        frame_2->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
"QWidget {background: #e0d3b6;}\n"
"QFrame {background: #e0d3b6;}\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"QLabel {background: #e0d3b6;}\n"
"QLineEdit {font: #161514;}\n"
"\n"
"\n"
"\n"
"\n"
""));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_2);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        frame_11 = new QFrame(frame_2);
        frame_11->setObjectName("frame_11");
        frame_11->setMinimumSize(QSize(0, 0));
        frame_11->setMaximumSize(QSize(16777215, 223));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_11);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_11);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 0));
        label->setMaximumSize(QSize(16777215, 223));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(18);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label);


        verticalLayout_10->addWidget(frame_11);

        frame_14 = new QFrame(frame_2);
        frame_14->setObjectName("frame_14");
        frame_14->setMinimumSize(QSize(0, 0));
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_14);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_13 = new QFrame(frame_14);
        frame_13->setObjectName("frame_13");
        frame_13->setMinimumSize(QSize(0, 0));
        frame_13->setMaximumSize(QSize(16777215, 16777215));
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_13);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        frame_15 = new QFrame(frame_13);
        frame_15->setObjectName("frame_15");
        frame_15->setMinimumSize(QSize(0, 0));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_15);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_2 = new QLabel(frame_15);
        label_2->setObjectName("label_2");
        label_2->setMinimumSize(QSize(0, 0));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        label_2->setFont(font2);

        horizontalLayout_4->addWidget(label_2);


        verticalLayout_11->addWidget(frame_15);

        frame_19 = new QFrame(frame_13);
        frame_19->setObjectName("frame_19");
        frame_19->setMinimumSize(QSize(0, 0));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_19);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_3 = new QLabel(frame_19);
        label_3->setObjectName("label_3");
        label_3->setMinimumSize(QSize(0, 0));
        label_3->setFont(font2);

        horizontalLayout_5->addWidget(label_3);


        verticalLayout_11->addWidget(frame_19);

        frame_16 = new QFrame(frame_13);
        frame_16->setObjectName("frame_16");
        frame_16->setMinimumSize(QSize(0, 0));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_16);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label_4 = new QLabel(frame_16);
        label_4->setObjectName("label_4");
        label_4->setMinimumSize(QSize(0, 0));
        label_4->setFont(font2);

        horizontalLayout_6->addWidget(label_4);


        verticalLayout_11->addWidget(frame_16);

        frame_17 = new QFrame(frame_13);
        frame_17->setObjectName("frame_17");
        frame_17->setMinimumSize(QSize(0, 0));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_17);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_5 = new QLabel(frame_17);
        label_5->setObjectName("label_5");
        label_5->setMinimumSize(QSize(0, 0));
        label_5->setFont(font2);

        horizontalLayout_7->addWidget(label_5);


        verticalLayout_11->addWidget(frame_17);

        frame_18 = new QFrame(frame_13);
        frame_18->setObjectName("frame_18");
        frame_18->setMinimumSize(QSize(0, 195));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_18);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_6 = new QLabel(frame_18);
        label_6->setObjectName("label_6");
        label_6->setMinimumSize(QSize(0, 0));
        label_6->setFont(font2);

        horizontalLayout_12->addWidget(label_6, 0, Qt::AlignTop);


        verticalLayout_11->addWidget(frame_18, 0, Qt::AlignTop);


        horizontalLayout_3->addWidget(frame_13);

        frame_12 = new QFrame(frame_14);
        frame_12->setObjectName("frame_12");
        frame_12->setMinimumSize(QSize(0, 0));
        frame_12->setMaximumSize(QSize(16777215, 16777215));
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_12);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_24 = new QFrame(frame_12);
        frame_24->setObjectName("frame_24");
        frame_24->setMinimumSize(QSize(250, 0));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        frame_24->setFont(font3);
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_24);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        gender = new QComboBox(frame_24);
        gender->addItem(QString());
        gender->addItem(QString());
        gender->addItem(QString());
        gender->setObjectName("gender");
        gender->setFont(font3);
        gender->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
"QWidget {background: #e0d3b6;}\n"
"QFrame {background: #e0d3b6;}\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"QLabel {background: #e0d3b6;}\n"
"QLineEdit {font: #161514;}\n"
"QLineEdit {background: #ffffff;}QComboBox{background:#ffffff};"));

        horizontalLayout_8->addWidget(gender);


        verticalLayout_12->addWidget(frame_24, 0, Qt::AlignLeft);

        frame_20 = new QFrame(frame_12);
        frame_20->setObjectName("frame_20");
        frame_20->setMinimumSize(QSize(0, 0));
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_20);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        height_input = new QLineEdit(frame_20);
        height_input->setObjectName("height_input");
        height_input->setMinimumSize(QSize(0, 0));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setBold(false);
        font4.setItalic(false);
        height_input->setFont(font4);
        height_input->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
"QWidget {background: #e0d3b6;}\n"
"QFrame {background: #e0d3b6;}\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"QLabel {background: #e0d3b6;}\n"
"QLineEdit {font: #161514;}\n"
"QLineEdit {background: #ffffff;}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_9->addWidget(height_input);


        verticalLayout_12->addWidget(frame_20);

        frame_23 = new QFrame(frame_12);
        frame_23->setObjectName("frame_23");
        frame_23->setMinimumSize(QSize(0, 0));
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_23);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        weight_input = new QLineEdit(frame_23);
        weight_input->setObjectName("weight_input");
        weight_input->setMinimumSize(QSize(0, 0));
        weight_input->setFont(font4);
        weight_input->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
"QWidget {background: #e0d3b6;}\n"
"QFrame {background: #e0d3b6;}\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"QLabel {background: #e0d3b6;}\n"
"QLineEdit {font: #161514;}\n"
"QLineEdit {background: #ffffff;}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_10->addWidget(weight_input);


        verticalLayout_12->addWidget(frame_23);

        frame_22 = new QFrame(frame_12);
        frame_22->setObjectName("frame_22");
        frame_22->setMinimumSize(QSize(0, 0));
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_22);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        age_input = new QLineEdit(frame_22);
        age_input->setObjectName("age_input");
        age_input->setMinimumSize(QSize(0, 0));
        age_input->setFont(font4);
        age_input->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
"QWidget {background: #e0d3b6;}\n"
"QFrame {background: #e0d3b6;}\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"QLabel {background: #e0d3b6;}\n"
"QLineEdit {font: #161514;}\n"
"QLineEdit {background: #ffffff;}\n"
"\n"
"\n"
"\n"
""));

        horizontalLayout_11->addWidget(age_input);


        verticalLayout_12->addWidget(frame_22);

        frame_21 = new QFrame(frame_12);
        frame_21->setObjectName("frame_21");
        frame_21->setMinimumSize(QSize(0, 194));
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_21);
        verticalLayout_13->setObjectName("verticalLayout_13");
        activitylevel_input = new QComboBox(frame_21);
        activitylevel_input->addItem(QString());
        activitylevel_input->addItem(QString());
        activitylevel_input->addItem(QString());
        activitylevel_input->addItem(QString());
        activitylevel_input->addItem(QString());
        activitylevel_input->addItem(QString());
        activitylevel_input->setObjectName("activitylevel_input");
        activitylevel_input->setFont(font3);
        activitylevel_input->setStyleSheet(QString::fromUtf8("QComboBox{background:#ffffff};"));

        verticalLayout_13->addWidget(activitylevel_input);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer);


        verticalLayout_12->addWidget(frame_21, 0, Qt::AlignTop);


        horizontalLayout_3->addWidget(frame_12);


        verticalLayout_10->addWidget(frame_14);

        lineEdit = new QLineEdit(frame_2);
        lineEdit->setObjectName("lineEdit");

        verticalLayout_10->addWidget(lineEdit);

        frame_25 = new QFrame(frame_2);
        frame_25->setObjectName("frame_25");
        frame_25->setMaximumSize(QSize(16777215, 50));
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_25);
        verticalLayout_14->setObjectName("verticalLayout_14");
        pushButton = new QPushButton(frame_25);
        pushButton->setObjectName("pushButton");
        pushButton->setMaximumSize(QSize(100, 16777215));
        pushButton->setFont(font3);

        verticalLayout_14->addWidget(pushButton);


        verticalLayout_10->addWidget(frame_25, 0, Qt::AlignHCenter);


        horizontalLayout->addWidget(frame_2);


        retranslateUi(caloriecalculator);

        QMetaObject::connectSlotsByName(caloriecalculator);
    } // setupUi

    void retranslateUi(QDialog *caloriecalculator)
    {
        caloriecalculator->setWindowTitle(QCoreApplication::translate("caloriecalculator", "Dialog", nullptr));
        label_pix->setText(QString());
        commandLinkButton_4->setText(QCoreApplication::translate("caloriecalculator", "My Profile", nullptr));
        commandLinkButton_9->setText(QCoreApplication::translate("caloriecalculator", "Diet Plan", nullptr));
        commandLinkButton_10->setText(QCoreApplication::translate("caloriecalculator", "Workout Plan", nullptr));
        commandLinkButton_11->setText(QCoreApplication::translate("caloriecalculator", "BMI Calculator", nullptr));
        commandLinkButton_12->setText(QCoreApplication::translate("caloriecalculator", "Body Fat Calculator", nullptr));
        commandLinkButton_13->setText(QCoreApplication::translate("caloriecalculator", "Settings", nullptr));
        commandLinkButton_14->setText(QCoreApplication::translate("caloriecalculator", "Log Out", nullptr));
        label->setText(QCoreApplication::translate("caloriecalculator", "<html><head/><body><p align=\"center\"><span style=\" font-size:36pt;\">Calories Calculator</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("caloriecalculator", "Gender", nullptr));
        label_3->setText(QCoreApplication::translate("caloriecalculator", "Height", nullptr));
        label_4->setText(QCoreApplication::translate("caloriecalculator", "Weight", nullptr));
        label_5->setText(QCoreApplication::translate("caloriecalculator", "Age", nullptr));
        label_6->setText(QCoreApplication::translate("caloriecalculator", "Activity Level", nullptr));
        gender->setItemText(0, QCoreApplication::translate("caloriecalculator", "Male", nullptr));
        gender->setItemText(1, QCoreApplication::translate("caloriecalculator", "Female", nullptr));
        gender->setItemText(2, QCoreApplication::translate("caloriecalculator", "Others", nullptr));

        height_input->setPlaceholderText(QCoreApplication::translate("caloriecalculator", "in cm", nullptr));
        weight_input->setPlaceholderText(QCoreApplication::translate("caloriecalculator", "in kg", nullptr));
        age_input->setPlaceholderText(QCoreApplication::translate("caloriecalculator", "in years", nullptr));
        activitylevel_input->setItemText(0, QCoreApplication::translate("caloriecalculator", "Sedentary", nullptr));
        activitylevel_input->setItemText(1, QCoreApplication::translate("caloriecalculator", "Light", nullptr));
        activitylevel_input->setItemText(2, QCoreApplication::translate("caloriecalculator", "Moderate", nullptr));
        activitylevel_input->setItemText(3, QCoreApplication::translate("caloriecalculator", "Active", nullptr));
        activitylevel_input->setItemText(4, QCoreApplication::translate("caloriecalculator", "Very Active", nullptr));
        activitylevel_input->setItemText(5, QCoreApplication::translate("caloriecalculator", "Extra Active", nullptr));

        pushButton->setText(QCoreApplication::translate("caloriecalculator", "Calculate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class caloriecalculator: public Ui_caloriecalculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALORIECALCULATOR_H
