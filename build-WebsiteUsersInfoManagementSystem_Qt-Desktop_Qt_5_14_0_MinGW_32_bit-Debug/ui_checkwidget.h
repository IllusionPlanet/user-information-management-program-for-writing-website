/********************************************************************************
** Form generated from reading UI file 'checkwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKWIDGET_H
#define UI_CHECKWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckWidget
{
public:
    QPushButton *returnButton;
    QLabel *label;
    QLineEdit *checkByUsernameLineEdit;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *showIDLabel;
    QLabel *showEnrolltimeLabel;
    QLabel *showWorkstypeLabel;
    QLabel *showWorksnumLabel;
    QLabel *showTotalrateLabel;
    QLabel *showAverageLabel;
    QPushButton *checkButton;
    QLabel *label_8;

    void setupUi(QWidget *CheckWidget)
    {
        if (CheckWidget->objectName().isEmpty())
            CheckWidget->setObjectName(QString::fromUtf8("CheckWidget"));
        CheckWidget->resize(714, 485);
        returnButton = new QPushButton(CheckWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(600, 420, 81, 23));
        label = new QLabel(CheckWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 80, 54, 12));
        checkByUsernameLineEdit = new QLineEdit(CheckWidget);
        checkByUsernameLineEdit->setObjectName(QString::fromUtf8("checkByUsernameLineEdit"));
        checkByUsernameLineEdit->setGeometry(QRect(370, 80, 113, 20));
        label_2 = new QLabel(CheckWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 130, 54, 16));
        label_3 = new QLabel(CheckWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(220, 170, 54, 12));
        label_4 = new QLabel(CheckWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(220, 210, 54, 12));
        label_5 = new QLabel(CheckWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(220, 250, 54, 12));
        label_6 = new QLabel(CheckWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(220, 290, 61, 16));
        label_7 = new QLabel(CheckWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(220, 330, 61, 16));
        showIDLabel = new QLabel(CheckWidget);
        showIDLabel->setObjectName(QString::fromUtf8("showIDLabel"));
        showIDLabel->setGeometry(QRect(370, 130, 54, 12));
        showEnrolltimeLabel = new QLabel(CheckWidget);
        showEnrolltimeLabel->setObjectName(QString::fromUtf8("showEnrolltimeLabel"));
        showEnrolltimeLabel->setGeometry(QRect(370, 170, 54, 12));
        showWorkstypeLabel = new QLabel(CheckWidget);
        showWorkstypeLabel->setObjectName(QString::fromUtf8("showWorkstypeLabel"));
        showWorkstypeLabel->setGeometry(QRect(370, 210, 54, 12));
        showWorksnumLabel = new QLabel(CheckWidget);
        showWorksnumLabel->setObjectName(QString::fromUtf8("showWorksnumLabel"));
        showWorksnumLabel->setGeometry(QRect(370, 250, 54, 12));
        showTotalrateLabel = new QLabel(CheckWidget);
        showTotalrateLabel->setObjectName(QString::fromUtf8("showTotalrateLabel"));
        showTotalrateLabel->setGeometry(QRect(370, 290, 54, 12));
        showAverageLabel = new QLabel(CheckWidget);
        showAverageLabel->setObjectName(QString::fromUtf8("showAverageLabel"));
        showAverageLabel->setGeometry(QRect(370, 330, 54, 12));
        checkButton = new QPushButton(CheckWidget);
        checkButton->setObjectName(QString::fromUtf8("checkButton"));
        checkButton->setGeometry(QRect(310, 380, 75, 23));
        label_8 = new QLabel(CheckWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(80, 40, 541, 16));

        retranslateUi(CheckWidget);

        QMetaObject::connectSlotsByName(CheckWidget);
    } // setupUi

    void retranslateUi(QWidget *CheckWidget)
    {
        CheckWidget->setWindowTitle(QCoreApplication::translate("CheckWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("CheckWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        label->setText(QCoreApplication::translate("CheckWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("CheckWidget", "ID", nullptr));
        label_3->setText(QCoreApplication::translate("CheckWidget", "\346\263\250\345\206\214\346\227\266\351\227\264", nullptr));
        label_4->setText(QCoreApplication::translate("CheckWidget", "\344\275\234\345\223\201\347\261\273\345\236\213", nullptr));
        label_5->setText(QCoreApplication::translate("CheckWidget", "\344\275\234\345\223\201\346\225\260\351\207\217", nullptr));
        label_6->setText(QCoreApplication::translate("CheckWidget", "\344\275\234\345\223\201\346\200\273\350\257\204\345\210\206", nullptr));
        label_7->setText(QCoreApplication::translate("CheckWidget", "\344\275\234\345\223\201\345\271\263\345\235\207\345\210\206", nullptr));
        showIDLabel->setText(QCoreApplication::translate("CheckWidget", "/", nullptr));
        showEnrolltimeLabel->setText(QCoreApplication::translate("CheckWidget", "/", nullptr));
        showWorkstypeLabel->setText(QCoreApplication::translate("CheckWidget", "/", nullptr));
        showWorksnumLabel->setText(QCoreApplication::translate("CheckWidget", "/", nullptr));
        showTotalrateLabel->setText(QCoreApplication::translate("CheckWidget", "/", nullptr));
        showAverageLabel->setText(QCoreApplication::translate("CheckWidget", "/", nullptr));
        checkButton->setText(QCoreApplication::translate("CheckWidget", "\346\237\245 \350\257\242", nullptr));
        label_8->setText(QCoreApplication::translate("CheckWidget", "\350\246\201\346\237\245\350\257\242\347\224\250\346\210\267\344\277\241\346\201\257\357\274\214\350\257\267\350\276\223\345\205\245\345\257\271\345\272\224\347\224\250\346\210\267\347\232\204\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckWidget: public Ui_CheckWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKWIDGET_H
