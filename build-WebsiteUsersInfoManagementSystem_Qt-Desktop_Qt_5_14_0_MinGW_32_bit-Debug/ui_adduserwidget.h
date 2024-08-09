/********************************************************************************
** Form generated from reading UI file 'adduserwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSERWIDGET_H
#define UI_ADDUSERWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddUserWidget
{
public:
    QPushButton *returnButton;
    QLabel *usernameLabel;
    QLabel *idLabel;
    QLabel *enrolltimeLabel;
    QLabel *workstypeLabel;
    QLabel *worksnumLabel;
    QLabel *totalrateLable;
    QLineEdit *usernameLineEdit;
    QLineEdit *idLineEdit;
    QLineEdit *enrolltimeLineEdit;
    QLineEdit *workstypeLineEdit;
    QLineEdit *worksnumLineEdit;
    QLineEdit *totalrateLineEdit;
    QPushButton *addButton;
    QLabel *label;

    void setupUi(QWidget *AddUserWidget)
    {
        if (AddUserWidget->objectName().isEmpty())
            AddUserWidget->setObjectName(QString::fromUtf8("AddUserWidget"));
        AddUserWidget->resize(714, 488);
        returnButton = new QPushButton(AddUserWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(600, 430, 81, 23));
        usernameLabel = new QLabel(AddUserWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(190, 130, 181, 20));
        idLabel = new QLabel(AddUserWidget);
        idLabel->setObjectName(QString::fromUtf8("idLabel"));
        idLabel->setGeometry(QRect(190, 170, 131, 16));
        enrolltimeLabel = new QLabel(AddUserWidget);
        enrolltimeLabel->setObjectName(QString::fromUtf8("enrolltimeLabel"));
        enrolltimeLabel->setGeometry(QRect(190, 210, 161, 16));
        workstypeLabel = new QLabel(AddUserWidget);
        workstypeLabel->setObjectName(QString::fromUtf8("workstypeLabel"));
        workstypeLabel->setGeometry(QRect(190, 250, 191, 16));
        worksnumLabel = new QLabel(AddUserWidget);
        worksnumLabel->setObjectName(QString::fromUtf8("worksnumLabel"));
        worksnumLabel->setGeometry(QRect(190, 290, 171, 16));
        totalrateLable = new QLabel(AddUserWidget);
        totalrateLable->setObjectName(QString::fromUtf8("totalrateLable"));
        totalrateLable->setGeometry(QRect(190, 330, 191, 16));
        usernameLineEdit = new QLineEdit(AddUserWidget);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(410, 130, 113, 20));
        idLineEdit = new QLineEdit(AddUserWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(410, 170, 113, 20));
        enrolltimeLineEdit = new QLineEdit(AddUserWidget);
        enrolltimeLineEdit->setObjectName(QString::fromUtf8("enrolltimeLineEdit"));
        enrolltimeLineEdit->setGeometry(QRect(410, 210, 113, 20));
        workstypeLineEdit = new QLineEdit(AddUserWidget);
        workstypeLineEdit->setObjectName(QString::fromUtf8("workstypeLineEdit"));
        workstypeLineEdit->setGeometry(QRect(410, 250, 113, 20));
        worksnumLineEdit = new QLineEdit(AddUserWidget);
        worksnumLineEdit->setObjectName(QString::fromUtf8("worksnumLineEdit"));
        worksnumLineEdit->setGeometry(QRect(410, 290, 113, 20));
        totalrateLineEdit = new QLineEdit(AddUserWidget);
        totalrateLineEdit->setObjectName(QString::fromUtf8("totalrateLineEdit"));
        totalrateLineEdit->setGeometry(QRect(410, 330, 113, 20));
        addButton = new QPushButton(AddUserWidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(310, 390, 75, 23));
        label = new QLabel(AddUserWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 40, 551, 51));

        retranslateUi(AddUserWidget);

        QMetaObject::connectSlotsByName(AddUserWidget);
    } // setupUi

    void retranslateUi(QWidget *AddUserWidget)
    {
        AddUserWidget->setWindowTitle(QCoreApplication::translate("AddUserWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("AddUserWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        usernameLabel->setText(QCoreApplication::translate("AddUserWidget", "\347\224\250\346\210\267\345\220\215\357\274\210\346\224\257\346\214\201\350\213\261\346\226\207\345\255\227\346\257\215\345\222\214\346\225\260\345\255\227\357\274\211", nullptr));
        idLabel->setText(QCoreApplication::translate("AddUserWidget", "ID\357\274\210\344\273\205\346\224\257\346\214\201\346\225\260\345\255\227\357\274\211", nullptr));
        enrolltimeLabel->setText(QCoreApplication::translate("AddUserWidget", "\346\263\250\345\206\214\346\227\266\351\227\264\357\274\210\345\271\264-\346\234\210-\346\227\245\357\274\211", nullptr));
        workstypeLabel->setText(QCoreApplication::translate("AddUserWidget", "\344\275\234\345\223\201\347\261\273\345\236\213\357\274\210\346\224\257\346\214\201\346\261\211\345\255\227\346\210\226\350\213\261\346\226\207\357\274\211", nullptr));
        worksnumLabel->setText(QCoreApplication::translate("AddUserWidget", "\344\275\234\345\223\201\346\225\260\351\207\217\357\274\210\346\225\260\345\255\227\357\274\211", nullptr));
        totalrateLable->setText(QCoreApplication::translate("AddUserWidget", "\344\275\234\345\223\201\346\200\273\350\257\204\345\210\206\357\274\210\346\225\260\345\255\227\357\274\211", nullptr));
        usernameLineEdit->setText(QString());
        addButton->setText(QCoreApplication::translate("AddUserWidget", "\346\267\273\345\212\240", nullptr));
        label->setText(QCoreApplication::translate("AddUserWidget", "\350\246\201\346\267\273\345\212\240\347\224\250\346\210\267\344\277\241\346\201\257\357\274\214\350\257\267\345\234\250\344\270\213\345\210\227\346\241\206\344\270\255\350\276\223\345\205\245\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddUserWidget: public Ui_AddUserWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSERWIDGET_H
