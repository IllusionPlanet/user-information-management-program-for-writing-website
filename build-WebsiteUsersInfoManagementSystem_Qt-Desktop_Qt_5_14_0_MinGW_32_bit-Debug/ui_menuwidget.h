/********************************************************************************
** Form generated from reading UI file 'menuwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUWIDGET_H
#define UI_MENUWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MenuWidget
{
public:
    QPushButton *modifyButton;
    QPushButton *checkButton;
    QPushButton *sortButton;
    QPushButton *addButton;
    QPushButton *exitButton;
    QTextBrowser *textBrowser;
    QPushButton *typeSearchButton;

    void setupUi(QWidget *MenuWidget)
    {
        if (MenuWidget->objectName().isEmpty())
            MenuWidget->setObjectName(QString::fromUtf8("MenuWidget"));
        MenuWidget->resize(713, 485);
        modifyButton = new QPushButton(MenuWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(300, 310, 91, 23));
        checkButton = new QPushButton(MenuWidget);
        checkButton->setObjectName(QString::fromUtf8("checkButton"));
        checkButton->setGeometry(QRect(300, 210, 91, 23));
        sortButton = new QPushButton(MenuWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(300, 360, 91, 23));
        addButton = new QPushButton(MenuWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(300, 160, 91, 21));
        exitButton = new QPushButton(MenuWidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(300, 410, 91, 23));
        textBrowser = new QTextBrowser(MenuWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(80, 60, 561, 41));
        typeSearchButton = new QPushButton(MenuWidget);
        typeSearchButton->setObjectName(QString::fromUtf8("typeSearchButton"));
        typeSearchButton->setGeometry(QRect(300, 260, 91, 23));

        retranslateUi(MenuWidget);

        QMetaObject::connectSlotsByName(MenuWidget);
    } // setupUi

    void retranslateUi(QWidget *MenuWidget)
    {
        MenuWidget->setWindowTitle(QCoreApplication::translate("MenuWidget", "Form", nullptr));
        modifyButton->setText(QCoreApplication::translate("MenuWidget", "\344\277\256\346\224\271\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        checkButton->setText(QCoreApplication::translate("MenuWidget", "\346\237\245\350\257\242\347\224\250\346\210\267", nullptr));
        sortButton->setText(QCoreApplication::translate("MenuWidget", "\347\224\250\346\210\267\344\277\241\346\201\257\346\216\222\345\272\217", nullptr));
        addButton->setText(QCoreApplication::translate("MenuWidget", "\346\267\273\345\212\240\347\224\250\346\210\267", nullptr));
        exitButton->setText(QCoreApplication::translate("MenuWidget", "\351\200\200 \345\207\272", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("MenuWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:20pt; font-weight:600; color:#0000ff;\">\346\254\242\350\277\216\344\275\277\347\224\250 \347\275\221\347\253\231\347\224\250\346\210\267\344\277\241\346\201\257\347\256\241\347\220\206\347\263\273\347\273\237 v1.0\343\200\202</span></p></body></html>", nullptr));
        typeSearchButton->setText(QCoreApplication::translate("MenuWidget", "\346\214\211\344\275\234\345\223\201\347\261\273\345\236\213\346\243\200\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MenuWidget: public Ui_MenuWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUWIDGET_H
