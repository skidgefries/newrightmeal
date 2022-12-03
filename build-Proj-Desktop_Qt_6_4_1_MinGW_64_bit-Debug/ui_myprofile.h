/********************************************************************************
** Form generated from reading UI file 'myprofile.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYPROFILE_H
#define UI_MYPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_myprofile
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *setPixmap;
    QVBoxLayout *verticalLayout_9;
    QFrame *frame_13;
    QFrame *frame_32;
    QVBoxLayout *verticalLayout_10;
    QLabel *pics;
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
    QVBoxLayout *verticalLayout_11;
    QFrame *frame_11;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QFrame *frame_12;
    QVBoxLayout *verticalLayout_12;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_3;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_13;
    QFrame *frame_18;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QFrame *frame_22;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QFrame *frame_23;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QFrame *frame_24;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_5;
    QFrame *frame_21;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_6;
    QFrame *frame_20;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_7;
    QFrame *frame_19;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_8;
    QFrame *frame_17;
    QVBoxLayout *verticalLayout_14;
    QFrame *frame_25;
    QHBoxLayout *horizontalLayout_11;
    QLabel *username;
    QFrame *frame_31;
    QHBoxLayout *horizontalLayout_12;
    QLabel *age;
    QFrame *frame_30;
    QHBoxLayout *horizontalLayout_13;
    QLabel *height;
    QFrame *frame_28;
    QHBoxLayout *horizontalLayout_14;
    QLabel *weight;
    QFrame *frame_27;
    QHBoxLayout *horizontalLayout_15;
    QLabel *gender;
    QFrame *frame_29;
    QHBoxLayout *horizontalLayout_16;
    QLabel *bodyfat;
    QFrame *frame_26;
    QHBoxLayout *horizontalLayout_17;
    QLabel *diet;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_18;
    QPushButton *pushButton;

    void setupUi(QDialog *myprofile)
    {
        if (myprofile->objectName().isEmpty())
            myprofile->setObjectName("myprofile");
        myprofile->resize(1115, 700);
        myprofile->setStyleSheet(QString::fromUtf8("QDialog {background: #e0d3b6;}\n"
"QPushButton {background: #cc7f63;}\n"
"QLabel {font:  #c9563c;}\n"
"QLineEdit {font: #161514;}\n"
"QCommandLinkButton {background: #e0d3b6;}"));
        horizontalLayout = new QHBoxLayout(myprofile);
        horizontalLayout->setObjectName("horizontalLayout");
        frame = new QFrame(myprofile);
        frame->setObjectName("frame");
        frame->setMinimumSize(QSize(260, 0));
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
        setPixmap = new QFrame(frame);
        setPixmap->setObjectName("setPixmap");
        setPixmap->setMinimumSize(QSize(0, 200));
        setPixmap->setMaximumSize(QSize(16777215, 16777215));
        setPixmap->setFrameShape(QFrame::StyledPanel);
        setPixmap->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(setPixmap);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        frame_13 = new QFrame(setPixmap);
        frame_13->setObjectName("frame_13");
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        frame_32 = new QFrame(frame_13);
        frame_32->setObjectName("frame_32");
        frame_32->setGeometry(QRect(-1, 0, 87, 44));
        frame_32->setFrameShape(QFrame::StyledPanel);
        frame_32->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_32);
        verticalLayout_10->setObjectName("verticalLayout_10");
        pics = new QLabel(frame_13);
        pics->setObjectName("pics");
        pics->setGeometry(QRect(-10, -10, 271, 208));
        pics->setMinimumSize(QSize(260, 201));
        pics->setPixmap(QPixmap(QString::fromUtf8(":/img/logo")));
        pics->setScaledContents(true);
        pics->setWordWrap(false);

        verticalLayout_9->addWidget(frame_13);


        verticalLayout->addWidget(setPixmap);

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
        font.setFamilies({QString::fromUtf8("Times New Roman")});
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

        frame_2 = new QFrame(myprofile);
        frame_2->setObjectName("frame_2");
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
        verticalLayout_11 = new QVBoxLayout(frame_2);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        frame_11 = new QFrame(frame_2);
        frame_11->setObjectName("frame_11");
        frame_11->setEnabled(true);
        frame_11->setMaximumSize(QSize(16777215, 223));
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_11);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_11);
        label->setObjectName("label");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(36);
        font1.setBold(false);
        font1.setItalic(false);
        label->setFont(font1);

        horizontalLayout_2->addWidget(label, 0, Qt::AlignHCenter);


        verticalLayout_11->addWidget(frame_11);

        frame_12 = new QFrame(frame_2);
        frame_12->setObjectName("frame_12");
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_12);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        frame_14 = new QFrame(frame_12);
        frame_14->setObjectName("frame_14");
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_14);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_15 = new QFrame(frame_14);
        frame_15->setObjectName("frame_15");
        frame_15->setMinimumSize(QSize(120, 0));
        frame_15->setMaximumSize(QSize(300, 16777215));
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_15);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        frame_18 = new QFrame(frame_15);
        frame_18->setObjectName("frame_18");
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_18);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_18);
        label_2->setObjectName("label_2");
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        font2.setBold(false);
        font2.setItalic(false);
        label_2->setFont(font2);

        horizontalLayout_4->addWidget(label_2, 0, Qt::AlignHCenter);


        verticalLayout_13->addWidget(frame_18);

        frame_22 = new QFrame(frame_15);
        frame_22->setObjectName("frame_22");
        frame_22->setFrameShape(QFrame::StyledPanel);
        frame_22->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_22);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(frame_22);
        label_3->setObjectName("label_3");
        label_3->setFont(font2);

        horizontalLayout_5->addWidget(label_3, 0, Qt::AlignHCenter);


        verticalLayout_13->addWidget(frame_22);

        frame_23 = new QFrame(frame_15);
        frame_23->setObjectName("frame_23");
        frame_23->setFrameShape(QFrame::StyledPanel);
        frame_23->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_23);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(frame_23);
        label_4->setObjectName("label_4");
        label_4->setFont(font2);

        horizontalLayout_6->addWidget(label_4, 0, Qt::AlignHCenter);


        verticalLayout_13->addWidget(frame_23);

        frame_24 = new QFrame(frame_15);
        frame_24->setObjectName("frame_24");
        frame_24->setFrameShape(QFrame::StyledPanel);
        frame_24->setFrameShadow(QFrame::Raised);
        horizontalLayout_7 = new QHBoxLayout(frame_24);
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(frame_24);
        label_5->setObjectName("label_5");
        label_5->setFont(font2);

        horizontalLayout_7->addWidget(label_5, 0, Qt::AlignHCenter);


        verticalLayout_13->addWidget(frame_24);

        frame_21 = new QFrame(frame_15);
        frame_21->setObjectName("frame_21");
        frame_21->setFrameShape(QFrame::StyledPanel);
        frame_21->setFrameShadow(QFrame::Raised);
        horizontalLayout_8 = new QHBoxLayout(frame_21);
        horizontalLayout_8->setSpacing(0);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(frame_21);
        label_6->setObjectName("label_6");
        label_6->setFont(font2);

        horizontalLayout_8->addWidget(label_6, 0, Qt::AlignHCenter);


        verticalLayout_13->addWidget(frame_21);

        frame_20 = new QFrame(frame_15);
        frame_20->setObjectName("frame_20");
        frame_20->setFrameShape(QFrame::StyledPanel);
        frame_20->setFrameShadow(QFrame::Raised);
        horizontalLayout_9 = new QHBoxLayout(frame_20);
        horizontalLayout_9->setSpacing(0);
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        horizontalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(frame_20);
        label_7->setObjectName("label_7");
        label_7->setFont(font2);

        horizontalLayout_9->addWidget(label_7, 0, Qt::AlignHCenter);


        verticalLayout_13->addWidget(frame_20);

        frame_19 = new QFrame(frame_15);
        frame_19->setObjectName("frame_19");
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        horizontalLayout_10 = new QHBoxLayout(frame_19);
        horizontalLayout_10->setSpacing(0);
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        horizontalLayout_10->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(frame_19);
        label_8->setObjectName("label_8");
        label_8->setFont(font2);

        horizontalLayout_10->addWidget(label_8, 0, Qt::AlignHCenter);


        verticalLayout_13->addWidget(frame_19);


        horizontalLayout_3->addWidget(frame_15, 0, Qt::AlignLeft);

        frame_17 = new QFrame(frame_14);
        frame_17->setObjectName("frame_17");
        frame_17->setEnabled(true);
        frame_17->setMinimumSize(QSize(700, 0));
        frame_17->setMaximumSize(QSize(16777215, 16777215));
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_17);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        frame_25 = new QFrame(frame_17);
        frame_25->setObjectName("frame_25");
        frame_25->setFrameShape(QFrame::StyledPanel);
        frame_25->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_25);
        horizontalLayout_11->setSpacing(0);
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(frame_25);
        username->setObjectName("username");
        username->setMinimumSize(QSize(200, 0));

        horizontalLayout_11->addWidget(username);


        verticalLayout_14->addWidget(frame_25);

        frame_31 = new QFrame(frame_17);
        frame_31->setObjectName("frame_31");
        frame_31->setFrameShape(QFrame::StyledPanel);
        frame_31->setFrameShadow(QFrame::Raised);
        horizontalLayout_12 = new QHBoxLayout(frame_31);
        horizontalLayout_12->setSpacing(0);
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        horizontalLayout_12->setContentsMargins(0, 0, 0, 0);
        age = new QLabel(frame_31);
        age->setObjectName("age");
        age->setMinimumSize(QSize(200, 0));

        horizontalLayout_12->addWidget(age, 0, Qt::AlignLeft);


        verticalLayout_14->addWidget(frame_31);

        frame_30 = new QFrame(frame_17);
        frame_30->setObjectName("frame_30");
        frame_30->setFrameShape(QFrame::StyledPanel);
        frame_30->setFrameShadow(QFrame::Raised);
        horizontalLayout_13 = new QHBoxLayout(frame_30);
        horizontalLayout_13->setSpacing(0);
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        horizontalLayout_13->setContentsMargins(0, 0, 0, 0);
        height = new QLabel(frame_30);
        height->setObjectName("height");

        horizontalLayout_13->addWidget(height);


        verticalLayout_14->addWidget(frame_30);

        frame_28 = new QFrame(frame_17);
        frame_28->setObjectName("frame_28");
        frame_28->setFrameShape(QFrame::StyledPanel);
        frame_28->setFrameShadow(QFrame::Raised);
        horizontalLayout_14 = new QHBoxLayout(frame_28);
        horizontalLayout_14->setSpacing(0);
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        weight = new QLabel(frame_28);
        weight->setObjectName("weight");

        horizontalLayout_14->addWidget(weight);


        verticalLayout_14->addWidget(frame_28);

        frame_27 = new QFrame(frame_17);
        frame_27->setObjectName("frame_27");
        frame_27->setMinimumSize(QSize(0, 0));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        frame_27->setFont(font3);
        frame_27->setFrameShape(QFrame::StyledPanel);
        frame_27->setFrameShadow(QFrame::Raised);
        horizontalLayout_15 = new QHBoxLayout(frame_27);
        horizontalLayout_15->setSpacing(0);
        horizontalLayout_15->setObjectName("horizontalLayout_15");
        horizontalLayout_15->setContentsMargins(0, 0, 0, 0);
        gender = new QLabel(frame_27);
        gender->setObjectName("gender");

        horizontalLayout_15->addWidget(gender);


        verticalLayout_14->addWidget(frame_27);

        frame_29 = new QFrame(frame_17);
        frame_29->setObjectName("frame_29");
        frame_29->setFrameShape(QFrame::StyledPanel);
        frame_29->setFrameShadow(QFrame::Raised);
        horizontalLayout_16 = new QHBoxLayout(frame_29);
        horizontalLayout_16->setSpacing(0);
        horizontalLayout_16->setObjectName("horizontalLayout_16");
        horizontalLayout_16->setContentsMargins(0, 0, 0, 0);
        bodyfat = new QLabel(frame_29);
        bodyfat->setObjectName("bodyfat");

        horizontalLayout_16->addWidget(bodyfat);


        verticalLayout_14->addWidget(frame_29);

        frame_26 = new QFrame(frame_17);
        frame_26->setObjectName("frame_26");
        frame_26->setFrameShape(QFrame::StyledPanel);
        frame_26->setFrameShadow(QFrame::Raised);
        horizontalLayout_17 = new QHBoxLayout(frame_26);
        horizontalLayout_17->setSpacing(0);
        horizontalLayout_17->setObjectName("horizontalLayout_17");
        horizontalLayout_17->setContentsMargins(0, 0, 0, 0);
        diet = new QLabel(frame_26);
        diet->setObjectName("diet");

        horizontalLayout_17->addWidget(diet);


        verticalLayout_14->addWidget(frame_26);


        horizontalLayout_3->addWidget(frame_17);


        verticalLayout_12->addWidget(frame_14);

        frame_16 = new QFrame(frame_12);
        frame_16->setObjectName("frame_16");
        frame_16->setMaximumSize(QSize(16777215, 50));
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_18 = new QHBoxLayout(frame_16);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        pushButton = new QPushButton(frame_16);
        pushButton->setObjectName("pushButton");
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Times New Roman")});
        font4.setPointSize(12);
        pushButton->setFont(font4);
        pushButton->setStyleSheet(QString::fromUtf8("background: #cc7f63;"));

        horizontalLayout_18->addWidget(pushButton);


        verticalLayout_12->addWidget(frame_16, 0, Qt::AlignHCenter);


        verticalLayout_11->addWidget(frame_12);


        horizontalLayout->addWidget(frame_2);


        retranslateUi(myprofile);

        QMetaObject::connectSlotsByName(myprofile);
    } // setupUi

    void retranslateUi(QDialog *myprofile)
    {
        myprofile->setWindowTitle(QCoreApplication::translate("myprofile", "Dialog", nullptr));
        pics->setText(QString());
        commandLinkButton_4->setText(QCoreApplication::translate("myprofile", "My Profile", nullptr));
        commandLinkButton_9->setText(QCoreApplication::translate("myprofile", "Diet Plan", nullptr));
        commandLinkButton_10->setText(QCoreApplication::translate("myprofile", "Workout Plan", nullptr));
        commandLinkButton_11->setText(QCoreApplication::translate("myprofile", "BMI Calculator", nullptr));
        commandLinkButton_12->setText(QCoreApplication::translate("myprofile", "Body Fat Calculator", nullptr));
        commandLinkButton_13->setText(QCoreApplication::translate("myprofile", "Settings", nullptr));
        commandLinkButton_14->setText(QCoreApplication::translate("myprofile", "Log Out", nullptr));
        label->setText(QCoreApplication::translate("myprofile", "MY PROFILE", nullptr));
        label_2->setText(QCoreApplication::translate("myprofile", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("myprofile", "Age", nullptr));
        label_4->setText(QCoreApplication::translate("myprofile", "Height", nullptr));
        label_5->setText(QCoreApplication::translate("myprofile", "Weight", nullptr));
        label_6->setText(QCoreApplication::translate("myprofile", "Gender", nullptr));
        label_7->setText(QCoreApplication::translate("myprofile", "Body Fat", nullptr));
        label_8->setText(QCoreApplication::translate("myprofile", "Diet Type", nullptr));
        username->setText(QCoreApplication::translate("myprofile", "TextLabel", nullptr));
        age->setText(QCoreApplication::translate("myprofile", "TextLabel", nullptr));
        height->setText(QCoreApplication::translate("myprofile", "TextLabel", nullptr));
        weight->setText(QCoreApplication::translate("myprofile", "TextLabel", nullptr));
        gender->setText(QCoreApplication::translate("myprofile", "TextLabel", nullptr));
        bodyfat->setText(QCoreApplication::translate("myprofile", "TextLabel", nullptr));
        diet->setText(QCoreApplication::translate("myprofile", "TextLabel", nullptr));
        pushButton->setText(QCoreApplication::translate("myprofile", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class myprofile: public Ui_myprofile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYPROFILE_H
