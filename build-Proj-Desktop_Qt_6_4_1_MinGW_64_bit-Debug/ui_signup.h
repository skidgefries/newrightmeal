/********************************************************************************
** Form generated from reading UI file 'signup.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNUP_H
#define UI_SIGNUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_signup
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;
    QFrame *frame_4;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_6;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_18;
    QFrame *frame_10;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_21;
    QFrame *frame_11;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_24;
    QFrame *frame_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_22;
    QFrame *frame_8;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_23;
    QFrame *frame_9;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_25;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame_17;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_18;
    QFrame *frame_16;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEdit_2;
    QFrame *frame_13;
    QVBoxLayout *verticalLayout_11;
    QLineEdit *lineEdit_3;
    QFrame *frame_14;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEdit_4;
    QFrame *frame_12;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEdit_5;
    QFrame *frame_15;
    QVBoxLayout *verticalLayout_12;
    QDateEdit *dateEdit;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_4;
    QFrame *frame_18;
    QVBoxLayout *verticalLayout_13;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QFrame *frame_19;
    QVBoxLayout *verticalLayout_14;
    QCommandLinkButton *commandLinkButton;

    void setupUi(QDialog *signup)
    {
        if (signup->objectName().isEmpty())
            signup->setObjectName("signup");
        signup->resize(1043, 700);
        signup->setMinimumSize(QSize(0, 100));
        signup->setStyleSheet(QString::fromUtf8("QDialog {background: #e0d3b6;}\n"
"QPushButton {background: #cc7f63;}\n"
"QLabel {font:  #c9563c;}\n"
"QLineEdit {font: #161514;}\n"
"\n"
""));
        verticalLayout = new QVBoxLayout(signup);
        verticalLayout->setObjectName("verticalLayout");
        frame = new QFrame(signup);
        frame->setObjectName("frame");
        frame->setMaximumSize(QSize(16777215, 100));
        frame->setStyleSheet(QString::fromUtf8("QDialog {background: #e0d3b6;}\n"
"QPushButton {background: #cc7f63;}\n"
"QLabel {font:  #c9563c;}\n"
"QLineEdit {font: #161514;}\n"
"\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame);
        label->setObjectName("label");
        label->setMaximumSize(QSize(16777215, 100));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(36);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QDialog {background: #e0d3b6;}\n"
"QPushButton {background: #cc7f63;}\n"
"QCommandLinkButton  {background:#e0d3b6;}\n"
"QLabel {font:  #c9563c;}\n"
"QTextEdit {font: #161514;}\n"
"\n"
""));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);


        verticalLayout->addWidget(frame);

        frame_3 = new QFrame(signup);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_4 = new QFrame(frame_3);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_4);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_6 = new QFrame(frame_4);
        frame_6->setObjectName("frame_6");
        frame_6->setFrameShape(QFrame::StyledPanel);
        frame_6->setFrameShadow(QFrame::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_6);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, -1);
        label_18 = new QLabel(frame_6);
        label_18->setObjectName("label_18");
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_18->sizePolicy().hasHeightForWidth());
        label_18->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Times New Roman")});
        font1.setPointSize(12);
        font1.setBold(false);
        font1.setItalic(false);
        label_18->setFont(font1);

        verticalLayout_10->addWidget(label_18);


        verticalLayout_2->addWidget(frame_6);

        frame_10 = new QFrame(frame_4);
        frame_10->setObjectName("frame_10");
        frame_10->setFrameShape(QFrame::StyledPanel);
        frame_10->setFrameShadow(QFrame::Raised);
        verticalLayout_9 = new QVBoxLayout(frame_10);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(frame_10);
        label_21->setObjectName("label_21");
        sizePolicy.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy);
        label_21->setFont(font1);

        verticalLayout_9->addWidget(label_21);


        verticalLayout_2->addWidget(frame_10);

        frame_11 = new QFrame(frame_4);
        frame_11->setObjectName("frame_11");
        frame_11->setFrameShape(QFrame::StyledPanel);
        frame_11->setFrameShadow(QFrame::Raised);
        verticalLayout_8 = new QVBoxLayout(frame_11);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, -1);
        label_24 = new QLabel(frame_11);
        label_24->setObjectName("label_24");
        sizePolicy.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy);
        label_24->setFont(font1);

        verticalLayout_8->addWidget(label_24);


        verticalLayout_2->addWidget(frame_11);

        frame_7 = new QFrame(frame_4);
        frame_7->setObjectName("frame_7");
        frame_7->setFrameShape(QFrame::StyledPanel);
        frame_7->setFrameShadow(QFrame::Raised);
        verticalLayout_7 = new QVBoxLayout(frame_7);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, -1);
        label_22 = new QLabel(frame_7);
        label_22->setObjectName("label_22");
        sizePolicy.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy);
        label_22->setFont(font1);

        verticalLayout_7->addWidget(label_22);


        verticalLayout_2->addWidget(frame_7);

        frame_8 = new QFrame(frame_4);
        frame_8->setObjectName("frame_8");
        frame_8->setFrameShape(QFrame::StyledPanel);
        frame_8->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frame_8);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, -1);
        label_23 = new QLabel(frame_8);
        label_23->setObjectName("label_23");
        sizePolicy.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy);
        label_23->setFont(font1);

        verticalLayout_6->addWidget(label_23);


        verticalLayout_2->addWidget(frame_8);

        frame_9 = new QFrame(frame_4);
        frame_9->setObjectName("frame_9");
        frame_9->setFrameShape(QFrame::StyledPanel);
        frame_9->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_9);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, -1);
        label_25 = new QLabel(frame_9);
        label_25->setObjectName("label_25");
        sizePolicy.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy);
        label_25->setFont(font1);

        verticalLayout_5->addWidget(label_25);


        verticalLayout_2->addWidget(frame_9);


        horizontalLayout_2->addWidget(frame_4);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName("frame_5");
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        frame_17 = new QFrame(frame_5);
        frame_17->setObjectName("frame_17");
        frame_17->setFrameShape(QFrame::StyledPanel);
        frame_17->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_17);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        lineEdit = new QLineEdit(frame_17);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setMinimumSize(QSize(250, 0));
        lineEdit->setMaximumSize(QSize(400, 16777215));
        lineEdit->setFont(font1);

        horizontalLayout_3->addWidget(lineEdit);

        lineEdit_17 = new QLineEdit(frame_17);
        lineEdit_17->setObjectName("lineEdit_17");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(lineEdit_17->sizePolicy().hasHeightForWidth());
        lineEdit_17->setSizePolicy(sizePolicy1);
        lineEdit_17->setMinimumSize(QSize(250, 0));
        lineEdit_17->setFont(font1);

        horizontalLayout_3->addWidget(lineEdit_17);

        lineEdit_18 = new QLineEdit(frame_17);
        lineEdit_18->setObjectName("lineEdit_18");
        sizePolicy1.setHeightForWidth(lineEdit_18->sizePolicy().hasHeightForWidth());
        lineEdit_18->setSizePolicy(sizePolicy1);
        lineEdit_18->setMinimumSize(QSize(250, 0));
        lineEdit_18->setFont(font1);

        horizontalLayout_3->addWidget(lineEdit_18);


        verticalLayout_3->addWidget(frame_17);

        frame_16 = new QFrame(frame_5);
        frame_16->setObjectName("frame_16");
        frame_16->setFrameShape(QFrame::StyledPanel);
        frame_16->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_16);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_2 = new QLineEdit(frame_16);
        lineEdit_2->setObjectName("lineEdit_2");

        horizontalLayout_4->addWidget(lineEdit_2);


        verticalLayout_3->addWidget(frame_16);

        frame_13 = new QFrame(frame_5);
        frame_13->setObjectName("frame_13");
        frame_13->setFrameShape(QFrame::StyledPanel);
        frame_13->setFrameShadow(QFrame::Raised);
        verticalLayout_11 = new QVBoxLayout(frame_13);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(frame_13);
        lineEdit_3->setObjectName("lineEdit_3");

        verticalLayout_11->addWidget(lineEdit_3);


        verticalLayout_3->addWidget(frame_13);

        frame_14 = new QFrame(frame_5);
        frame_14->setObjectName("frame_14");
        frame_14->setFrameShape(QFrame::StyledPanel);
        frame_14->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_14);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        lineEdit_4 = new QLineEdit(frame_14);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(lineEdit_4);


        verticalLayout_3->addWidget(frame_14);

        frame_12 = new QFrame(frame_5);
        frame_12->setObjectName("frame_12");
        frame_12->setFrameShape(QFrame::StyledPanel);
        frame_12->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_12);
        horizontalLayout_6->setSpacing(0);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_5 = new QLineEdit(frame_12);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setEchoMode(QLineEdit::Password);

        horizontalLayout_6->addWidget(lineEdit_5);


        verticalLayout_3->addWidget(frame_12);

        frame_15 = new QFrame(frame_5);
        frame_15->setObjectName("frame_15");
        frame_15->setFrameShape(QFrame::StyledPanel);
        frame_15->setFrameShadow(QFrame::Raised);
        verticalLayout_12 = new QVBoxLayout(frame_15);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        dateEdit = new QDateEdit(frame_15);
        dateEdit->setObjectName("dateEdit");
        sizePolicy1.setHeightForWidth(dateEdit->sizePolicy().hasHeightForWidth());
        dateEdit->setSizePolicy(sizePolicy1);
        dateEdit->setDateTime(QDateTime(QDate(2022, 12, 7), QTime(0, 0, 0)));
        dateEdit->setCalendarPopup(true);

        verticalLayout_12->addWidget(dateEdit);


        verticalLayout_3->addWidget(frame_15);


        horizontalLayout_2->addWidget(frame_5);


        verticalLayout->addWidget(frame_3);

        frame_2 = new QFrame(signup);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(0, 100));
        frame_2->setMaximumSize(QSize(16777215, 80));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_4 = new QVBoxLayout(frame_2);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_18 = new QFrame(frame_2);
        frame_18->setObjectName("frame_18");
        frame_18->setMinimumSize(QSize(0, 50));
        frame_18->setFrameShape(QFrame::StyledPanel);
        frame_18->setFrameShadow(QFrame::Raised);
        verticalLayout_13 = new QVBoxLayout(frame_18);
        verticalLayout_13->setSpacing(0);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        checkBox = new QCheckBox(frame_18);
        checkBox->setObjectName("checkBox");
        sizePolicy1.setHeightForWidth(checkBox->sizePolicy().hasHeightForWidth());
        checkBox->setSizePolicy(sizePolicy1);
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Times New Roman")});
        font2.setPointSize(12);
        checkBox->setFont(font2);

        verticalLayout_13->addWidget(checkBox);

        pushButton = new QPushButton(frame_18);
        pushButton->setObjectName("pushButton");
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setFont(font2);

        verticalLayout_13->addWidget(pushButton, 0, Qt::AlignHCenter);

        frame_19 = new QFrame(frame_18);
        frame_19->setObjectName("frame_19");
        frame_19->setMinimumSize(QSize(0, 30));
        frame_19->setFrameShape(QFrame::StyledPanel);
        frame_19->setFrameShadow(QFrame::Raised);
        verticalLayout_14 = new QVBoxLayout(frame_19);
        verticalLayout_14->setObjectName("verticalLayout_14");
        commandLinkButton = new QCommandLinkButton(frame_19);
        commandLinkButton->setObjectName("commandLinkButton");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Times New Roman")});
        commandLinkButton->setFont(font3);

        verticalLayout_14->addWidget(commandLinkButton, 0, Qt::AlignHCenter);


        verticalLayout_13->addWidget(frame_19);


        verticalLayout_4->addWidget(frame_18);


        verticalLayout->addWidget(frame_2);


        retranslateUi(signup);

        QMetaObject::connectSlotsByName(signup);
    } // setupUi

    void retranslateUi(QDialog *signup)
    {
        signup->setWindowTitle(QCoreApplication::translate("signup", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("signup", "Sign Up", nullptr));
        label_18->setText(QCoreApplication::translate("signup", "Name*", nullptr));
        label_21->setText(QCoreApplication::translate("signup", "Email*", nullptr));
        label_24->setText(QCoreApplication::translate("signup", "Username*", nullptr));
        label_22->setText(QCoreApplication::translate("signup", "Password*", nullptr));
        label_23->setText(QCoreApplication::translate("signup", "Confirm Password*", nullptr));
        label_25->setText(QCoreApplication::translate("signup", "Date of Birth (DD/MM/YYYY)*", nullptr));
        lineEdit->setText(QString());
        lineEdit->setPlaceholderText(QCoreApplication::translate("signup", "First Name*", nullptr));
        lineEdit_17->setPlaceholderText(QCoreApplication::translate("signup", "Middle Name", nullptr));
        lineEdit_18->setPlaceholderText(QCoreApplication::translate("signup", "Last Name*", nullptr));
        dateEdit->setDisplayFormat(QCoreApplication::translate("signup", "yyyy-MM-dd", nullptr));
        checkBox->setText(QCoreApplication::translate("signup", "I agree to the Terms and Services and Privacy Policy", nullptr));
        pushButton->setText(QCoreApplication::translate("signup", "Continue", nullptr));
        commandLinkButton->setText(QCoreApplication::translate("signup", "Already have an account?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class signup: public Ui_signup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNUP_H
