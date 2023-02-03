/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(650, 300);
        Widget->setStyleSheet(QString::fromUtf8("background-image: url(:/back/background.jpg);"));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(245, 100, 150, 60));
        pushButton->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"background-image: url(:/back/option.png);\n"
"color: rgb(255, 170, 127);"));
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(245, 170, 150, 60));
        pushButton_2->setStyleSheet(QString::fromUtf8("background: transparent;\n"
"background-image: url(:/back/option.png);\n"
"color: rgb(255, 170, 127);"));
        label = new QLabel(Widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(230, 30, 200, 41));
        label->setStyleSheet(QString::fromUtf8("font: 26pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"background: transparent;\n"
"color: rgb(0, 0, 127);\n"
""));
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QApplication::translate("Widget", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        pushButton_2->setText(QApplication::translate("Widget", "\351\200\200\345\207\272", nullptr));
        label->setText(QApplication::translate("Widget", "\345\256\235\347\237\263\350\277\267\351\230\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
