/********************************************************************************
** Form generated from reading UI file 'displaybf.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISPLAYBF_H
#define UI_DISPLAYBF_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_displaybf
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_5;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_4;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_2;

    void setupUi(QMainWindow *displaybf)
    {
        if (displaybf->objectName().isEmpty())
            displaybf->setObjectName("displaybf");
        displaybf->resize(538, 356);
        centralwidget = new QWidget(displaybf);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout_5 = new QHBoxLayout(centralwidget);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        frame_2 = new QFrame(frame);
        frame_2->setObjectName("frame_2");
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_2);
        horizontalLayout_4->setSpacing(0);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        frame_5 = new QFrame(frame_2);
        frame_5->setObjectName("frame_5");
        frame_5->setMinimumSize(QSize(100, 0));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_5);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(frame_5);
        label->setObjectName("label");
        label->setMinimumSize(QSize(350, 0));
        label->setMaximumSize(QSize(350, 16777215));
        QFont font;
        font.setFamilies({QString::fromUtf8("Times New Roman")});
        font.setPointSize(22);
        font.setBold(false);
        font.setItalic(false);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("QMainWindow {background: #e0d3b6;} QPushButton {background: #cc7f63;} QCommandLinkButton {background:#e0d3b6;} QLabel {font: #000000;} QLineEdit {font: #161514;}"));

        horizontalLayout_3->addWidget(label);


        horizontalLayout_4->addWidget(frame_5);

        frame_4 = new QFrame(frame_2);
        frame_4->setObjectName("frame_4");
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout = new QHBoxLayout(frame_4);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(frame_4);
        label_2->setObjectName("label_2");
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{border-color: black;}"));

        horizontalLayout->addWidget(label_2);


        horizontalLayout_4->addWidget(frame_4);


        verticalLayout_2->addWidget(frame_2);

        frame_3 = new QFrame(frame);
        frame_3->setObjectName("frame_3");
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_3);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);

        verticalLayout_2->addWidget(frame_3);


        horizontalLayout_5->addWidget(frame);

        displaybf->setCentralWidget(centralwidget);

        retranslateUi(displaybf);

        QMetaObject::connectSlotsByName(displaybf);
    } // setupUi

    void retranslateUi(QMainWindow *displaybf)
    {
        displaybf->setWindowTitle(QCoreApplication::translate("displaybf", "displaybf", nullptr));
        label->setText(QCoreApplication::translate("displaybf", "Your Body Fat Percentage is ", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class displaybf: public Ui_displaybf {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISPLAYBF_H
