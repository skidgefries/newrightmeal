/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settings
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_49;
    QFrame *frame_115;
    QHBoxLayout *horizontalLayout;
    QFrame *frame_116;
    QVBoxLayout *verticalLayout_35;
    QFrame *frame_117;
    QVBoxLayout *verticalLayout_36;
    QLabel *label_pix_3;
    QFrame *frame_118;
    QVBoxLayout *verticalLayout_37;
    QCommandLinkButton *commandLinkButton_6;
    QFrame *frame_119;
    QVBoxLayout *verticalLayout_38;
    QCommandLinkButton *commandLinkButton_21;
    QFrame *frame_120;
    QVBoxLayout *verticalLayout_39;
    QCommandLinkButton *commandLinkButton_22;
    QFrame *frame_121;
    QVBoxLayout *verticalLayout_40;
    QCommandLinkButton *commandLinkButton_23;
    QFrame *frame_122;
    QVBoxLayout *verticalLayout_41;
    QCommandLinkButton *commandLinkButton_24;
    QFrame *frame_123;
    QVBoxLayout *verticalLayout_42;
    QCommandLinkButton *commandLinkButton_25;
    QFrame *frame_124;
    QVBoxLayout *verticalLayout_43;
    QCommandLinkButton *commandLinkButton_26;
    QFrame *frame_125;
    QVBoxLayout *verticalLayout_46;
    QFrame *frame_126;
    QVBoxLayout *verticalLayout_44;
    QLabel *label_9;
    QFrame *frame_127;
    QHBoxLayout *horizontalLayout_47;
    QFrame *frame_129;
    QVBoxLayout *verticalLayout;
    QFrame *frame_130;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_10;
    QFrame *frame_131;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QFrame *frame_134;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_12;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_13;
    QFrame *frame_128;
    QVBoxLayout *verticalLayout_47;
    QFrame *frame_133;
    QHBoxLayout *horizontalLayout_48;
    QPushButton *pushButton_57;
    QFrame *frame_132;
    QVBoxLayout *verticalLayout_51;
    QPushButton *pushButton_58;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_59;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_60;

    void setupUi(QMainWindow *settings)
    {
        if (settings->objectName().isEmpty())
            settings->setObjectName("settings");
        settings->resize(722, 643);
        centralwidget = new QWidget(settings);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_49 = new QVBoxLayout(centralwidget);
        verticalLayout_49->setSpacing(0);
        verticalLayout_49->setObjectName("verticalLayout_49");
        verticalLayout_49->setContentsMargins(0, 0, 0, 0);
        frame_115 = new QFrame(centralwidget);
        frame_115->setObjectName("frame_115");
        frame_115->setFrameShape(QFrame::StyledPanel);
        frame_115->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_115);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        frame_116 = new QFrame(frame_115);
        frame_116->setObjectName("frame_116");
        frame_116->setMaximumSize(QSize(250, 16777215));
        frame_116->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
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
        frame_116->setFrameShape(QFrame::StyledPanel);
        frame_116->setFrameShadow(QFrame::Raised);
        verticalLayout_35 = new QVBoxLayout(frame_116);
        verticalLayout_35->setSpacing(0);
        verticalLayout_35->setObjectName("verticalLayout_35");
        verticalLayout_35->setContentsMargins(0, 0, 0, 0);
        frame_117 = new QFrame(frame_116);
        frame_117->setObjectName("frame_117");
        frame_117->setMinimumSize(QSize(0, 200));
        frame_117->setMaximumSize(QSize(16777215, 16777215));
        frame_117->setFrameShape(QFrame::StyledPanel);
        frame_117->setFrameShadow(QFrame::Raised);
        verticalLayout_36 = new QVBoxLayout(frame_117);
        verticalLayout_36->setSpacing(0);
        verticalLayout_36->setObjectName("verticalLayout_36");
        verticalLayout_36->setContentsMargins(0, 0, 0, 0);
        label_pix_3 = new QLabel(frame_117);
        label_pix_3->setObjectName("label_pix_3");
        label_pix_3->setMaximumSize(QSize(16777215, 220));
        label_pix_3->setPixmap(QPixmap(QString::fromUtf8(":/img/logo")));
        label_pix_3->setScaledContents(true);

        verticalLayout_36->addWidget(label_pix_3);


        verticalLayout_35->addWidget(frame_117);

        frame_118 = new QFrame(frame_116);
        frame_118->setObjectName("frame_118");
        frame_118->setFrameShape(QFrame::StyledPanel);
        frame_118->setFrameShadow(QFrame::Raised);
        verticalLayout_37 = new QVBoxLayout(frame_118);
        verticalLayout_37->setSpacing(0);
        verticalLayout_37->setObjectName("verticalLayout_37");
        verticalLayout_37->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_6 = new QCommandLinkButton(frame_118);
        commandLinkButton_6->setObjectName("commandLinkButton_6");
        QFont font;
        font.setFamilies({QString::fromUtf8("Segoe UI")});
        font.setPointSize(16);
        font.setBold(false);
        commandLinkButton_6->setFont(font);

        verticalLayout_37->addWidget(commandLinkButton_6);


        verticalLayout_35->addWidget(frame_118);

        frame_119 = new QFrame(frame_116);
        frame_119->setObjectName("frame_119");
        frame_119->setFrameShape(QFrame::StyledPanel);
        frame_119->setFrameShadow(QFrame::Raised);
        verticalLayout_38 = new QVBoxLayout(frame_119);
        verticalLayout_38->setSpacing(0);
        verticalLayout_38->setObjectName("verticalLayout_38");
        verticalLayout_38->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_21 = new QCommandLinkButton(frame_119);
        commandLinkButton_21->setObjectName("commandLinkButton_21");
        commandLinkButton_21->setFont(font);

        verticalLayout_38->addWidget(commandLinkButton_21);


        verticalLayout_35->addWidget(frame_119);

        frame_120 = new QFrame(frame_116);
        frame_120->setObjectName("frame_120");
        frame_120->setFrameShape(QFrame::StyledPanel);
        frame_120->setFrameShadow(QFrame::Raised);
        verticalLayout_39 = new QVBoxLayout(frame_120);
        verticalLayout_39->setSpacing(0);
        verticalLayout_39->setObjectName("verticalLayout_39");
        verticalLayout_39->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_22 = new QCommandLinkButton(frame_120);
        commandLinkButton_22->setObjectName("commandLinkButton_22");
        commandLinkButton_22->setFont(font);

        verticalLayout_39->addWidget(commandLinkButton_22);


        verticalLayout_35->addWidget(frame_120);

        frame_121 = new QFrame(frame_116);
        frame_121->setObjectName("frame_121");
        frame_121->setFrameShape(QFrame::StyledPanel);
        frame_121->setFrameShadow(QFrame::Raised);
        verticalLayout_40 = new QVBoxLayout(frame_121);
        verticalLayout_40->setSpacing(0);
        verticalLayout_40->setObjectName("verticalLayout_40");
        verticalLayout_40->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_23 = new QCommandLinkButton(frame_121);
        commandLinkButton_23->setObjectName("commandLinkButton_23");
        commandLinkButton_23->setFont(font);

        verticalLayout_40->addWidget(commandLinkButton_23);


        verticalLayout_35->addWidget(frame_121);

        frame_122 = new QFrame(frame_116);
        frame_122->setObjectName("frame_122");
        frame_122->setFrameShape(QFrame::StyledPanel);
        frame_122->setFrameShadow(QFrame::Raised);
        verticalLayout_41 = new QVBoxLayout(frame_122);
        verticalLayout_41->setSpacing(0);
        verticalLayout_41->setObjectName("verticalLayout_41");
        verticalLayout_41->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_24 = new QCommandLinkButton(frame_122);
        commandLinkButton_24->setObjectName("commandLinkButton_24");
        commandLinkButton_24->setFont(font);

        verticalLayout_41->addWidget(commandLinkButton_24);


        verticalLayout_35->addWidget(frame_122);

        frame_123 = new QFrame(frame_116);
        frame_123->setObjectName("frame_123");
        frame_123->setFrameShape(QFrame::StyledPanel);
        frame_123->setFrameShadow(QFrame::Raised);
        verticalLayout_42 = new QVBoxLayout(frame_123);
        verticalLayout_42->setSpacing(0);
        verticalLayout_42->setObjectName("verticalLayout_42");
        verticalLayout_42->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_25 = new QCommandLinkButton(frame_123);
        commandLinkButton_25->setObjectName("commandLinkButton_25");
        commandLinkButton_25->setFont(font);

        verticalLayout_42->addWidget(commandLinkButton_25);


        verticalLayout_35->addWidget(frame_123);

        frame_124 = new QFrame(frame_116);
        frame_124->setObjectName("frame_124");
        frame_124->setFrameShape(QFrame::StyledPanel);
        frame_124->setFrameShadow(QFrame::Raised);
        verticalLayout_43 = new QVBoxLayout(frame_124);
        verticalLayout_43->setSpacing(0);
        verticalLayout_43->setObjectName("verticalLayout_43");
        verticalLayout_43->setContentsMargins(0, 0, 0, 0);
        commandLinkButton_26 = new QCommandLinkButton(frame_124);
        commandLinkButton_26->setObjectName("commandLinkButton_26");
        commandLinkButton_26->setFont(font);

        verticalLayout_43->addWidget(commandLinkButton_26);


        verticalLayout_35->addWidget(frame_124);


        horizontalLayout->addWidget(frame_116);

        frame_125 = new QFrame(frame_115);
        frame_125->setObjectName("frame_125");
        frame_125->setMaximumSize(QSize(16777215, 16777215));
        frame_125->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;}\n"
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
        frame_125->setFrameShape(QFrame::StyledPanel);
        frame_125->setFrameShadow(QFrame::Raised);
        verticalLayout_46 = new QVBoxLayout(frame_125);
        verticalLayout_46->setSpacing(0);
        verticalLayout_46->setObjectName("verticalLayout_46");
        verticalLayout_46->setContentsMargins(0, 0, 0, 0);
        frame_126 = new QFrame(frame_125);
        frame_126->setObjectName("frame_126");
        frame_126->setMinimumSize(QSize(0, 200));
        frame_126->setMaximumSize(QSize(16777215, 200));
        frame_126->setFrameShape(QFrame::StyledPanel);
        frame_126->setFrameShadow(QFrame::Raised);
        verticalLayout_44 = new QVBoxLayout(frame_126);
        verticalLayout_44->setSpacing(0);
        verticalLayout_44->setObjectName("verticalLayout_44");
        verticalLayout_44->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(frame_126);
        label_9->setObjectName("label_9");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(36);
        label_9->setFont(font1);

        verticalLayout_44->addWidget(label_9, 0, Qt::AlignHCenter);


        verticalLayout_46->addWidget(frame_126);

        frame_127 = new QFrame(frame_125);
        frame_127->setObjectName("frame_127");
        frame_127->setMinimumSize(QSize(0, 350));
        frame_127->setMaximumSize(QSize(16777215, 400));
        frame_127->setFrameShape(QFrame::StyledPanel);
        frame_127->setFrameShadow(QFrame::Raised);
        horizontalLayout_47 = new QHBoxLayout(frame_127);
        horizontalLayout_47->setSpacing(0);
        horizontalLayout_47->setObjectName("horizontalLayout_47");
        horizontalLayout_47->setContentsMargins(0, 0, 0, 0);
        frame_129 = new QFrame(frame_127);
        frame_129->setObjectName("frame_129");
        frame_129->setMinimumSize(QSize(0, 0));
        frame_129->setMaximumSize(QSize(100, 16777215));
        frame_129->setFrameShape(QFrame::StyledPanel);
        frame_129->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame_129);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        frame_130 = new QFrame(frame_129);
        frame_130->setObjectName("frame_130");
        frame_130->setMinimumSize(QSize(0, 0));
        frame_130->setMaximumSize(QSize(100, 100));
        frame_130->setFrameShape(QFrame::StyledPanel);
        frame_130->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_130);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_10 = new QLabel(frame_130);
        label_10->setObjectName("label_10");
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/img/about.png")));
        label_10->setScaledContents(true);

        horizontalLayout_4->addWidget(label_10);


        verticalLayout->addWidget(frame_130);

        frame_131 = new QFrame(frame_129);
        frame_131->setObjectName("frame_131");
        frame_131->setMinimumSize(QSize(0, 0));
        frame_131->setMaximumSize(QSize(100, 100));
        frame_131->setFrameShape(QFrame::StyledPanel);
        frame_131->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_131);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_11 = new QLabel(frame_131);
        label_11->setObjectName("label_11");
        label_11->setPixmap(QPixmap(QString::fromUtf8(":/img/Help.png")));
        label_11->setScaledContents(true);

        horizontalLayout_5->addWidget(label_11);


        verticalLayout->addWidget(frame_131);

        frame_134 = new QFrame(frame_129);
        frame_134->setObjectName("frame_134");
        frame_134->setMinimumSize(QSize(0, 0));
        frame_134->setMaximumSize(QSize(100, 100));
        frame_134->setFrameShape(QFrame::StyledPanel);
        frame_134->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_134);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_12 = new QLabel(frame_134);
        label_12->setObjectName("label_12");
        label_12->setPixmap(QPixmap(QString::fromUtf8(":/img/user.png")));
        label_12->setScaledContents(true);

        horizontalLayout_3->addWidget(label_12);


        verticalLayout->addWidget(frame_134);

        frame_3 = new QFrame(frame_129);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_13 = new QLabel(frame_3);
        label_13->setObjectName("label_13");
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/img/025-lock.png")));
        label_13->setScaledContents(true);

        horizontalLayout_2->addWidget(label_13);


        verticalLayout->addWidget(frame_3);


        horizontalLayout_47->addWidget(frame_129);

        frame_128 = new QFrame(frame_127);
        frame_128->setObjectName("frame_128");
        frame_128->setMinimumSize(QSize(350, 0));
        frame_128->setMaximumSize(QSize(16777215, 16777215));
        frame_128->setFrameShape(QFrame::StyledPanel);
        frame_128->setFrameShadow(QFrame::Raised);
        verticalLayout_47 = new QVBoxLayout(frame_128);
        verticalLayout_47->setSpacing(0);
        verticalLayout_47->setObjectName("verticalLayout_47");
        verticalLayout_47->setContentsMargins(0, 0, 0, 0);
        frame_133 = new QFrame(frame_128);
        frame_133->setObjectName("frame_133");
        frame_133->setMinimumSize(QSize(0, 100));
        frame_133->setMaximumSize(QSize(16777215, 16777215));
        frame_133->setFrameShape(QFrame::StyledPanel);
        frame_133->setFrameShadow(QFrame::Raised);
        horizontalLayout_48 = new QHBoxLayout(frame_133);
        horizontalLayout_48->setObjectName("horizontalLayout_48");
        pushButton_57 = new QPushButton(frame_133);
        pushButton_57->setObjectName("pushButton_57");
        pushButton_57->setMinimumSize(QSize(0, 70));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(16);
        pushButton_57->setFont(font2);

        horizontalLayout_48->addWidget(pushButton_57);


        verticalLayout_47->addWidget(frame_133);

        frame_132 = new QFrame(frame_128);
        frame_132->setObjectName("frame_132");
        frame_132->setMinimumSize(QSize(0, 0));
        frame_132->setMaximumSize(QSize(16777215, 16777215));
        frame_132->setFrameShape(QFrame::StyledPanel);
        frame_132->setFrameShadow(QFrame::Raised);
        verticalLayout_51 = new QVBoxLayout(frame_132);
        verticalLayout_51->setObjectName("verticalLayout_51");
        pushButton_58 = new QPushButton(frame_132);
        pushButton_58->setObjectName("pushButton_58");
        pushButton_58->setMinimumSize(QSize(0, 70));
        pushButton_58->setFont(font2);

        verticalLayout_51->addWidget(pushButton_58);


        verticalLayout_47->addWidget(frame_132);

        frame = new QFrame(frame_128);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setObjectName("verticalLayout_3");
        pushButton_59 = new QPushButton(frame);
        pushButton_59->setObjectName("pushButton_59");
        pushButton_59->setMinimumSize(QSize(0, 70));
        pushButton_59->setFont(font2);

        verticalLayout_3->addWidget(pushButton_59);


        verticalLayout_47->addWidget(frame);

        frame_2 = new QFrame(frame_128);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_60 = new QPushButton(frame_2);
        pushButton_60->setObjectName("pushButton_60");
        pushButton_60->setMinimumSize(QSize(0, 70));
        pushButton_60->setFont(font2);

        verticalLayout_2->addWidget(pushButton_60);


        verticalLayout_47->addWidget(frame_2);


        horizontalLayout_47->addWidget(frame_128);


        verticalLayout_46->addWidget(frame_127, 0, Qt::AlignTop);


        horizontalLayout->addWidget(frame_125);


        verticalLayout_49->addWidget(frame_115);

        settings->setCentralWidget(centralwidget);

        retranslateUi(settings);

        QMetaObject::connectSlotsByName(settings);
    } // setupUi

    void retranslateUi(QMainWindow *settings)
    {
        settings->setWindowTitle(QCoreApplication::translate("settings", "settings", nullptr));
        label_pix_3->setText(QString());
        commandLinkButton_6->setText(QCoreApplication::translate("settings", "My Profile", nullptr));
        commandLinkButton_21->setText(QCoreApplication::translate("settings", "Diet Plan", nullptr));
        commandLinkButton_22->setText(QCoreApplication::translate("settings", "Workout Plan", nullptr));
        commandLinkButton_23->setText(QCoreApplication::translate("settings", "BMI Calculator", nullptr));
        commandLinkButton_24->setText(QCoreApplication::translate("settings", "Body Fat Calculator", nullptr));
        commandLinkButton_25->setText(QCoreApplication::translate("settings", "Settings", nullptr));
        commandLinkButton_26->setText(QCoreApplication::translate("settings", "Log Out", nullptr));
        label_9->setText(QCoreApplication::translate("settings", "SETTINGS", nullptr));
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        pushButton_57->setText(QCoreApplication::translate("settings", "About Us", nullptr));
        pushButton_58->setText(QCoreApplication::translate("settings", "Help", nullptr));
        pushButton_59->setText(QCoreApplication::translate("settings", "Edit Username", nullptr));
        pushButton_60->setText(QCoreApplication::translate("settings", "Change Password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settings: public Ui_settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
