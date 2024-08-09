/********************************************************************************
** Form generated from reading UI file 'modifywidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFYWIDGET_H
#define UI_MODIFYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ModifyWidget
{
public:
    QPushButton *returnButton;
    QPushButton *deleteButton;
    QPushButton *modifyButton;
    QLineEdit *dusernameLineEdit;
    QLabel *dusernameLabel;
    QLabel *workstypeLabel;
    QLabel *usernameLabel;
    QLabel *enrolltimeLabel;
    QLabel *worksnumLabel;
    QLabel *totalrateLable;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QFrame *line;
    QLineEdit *idLineEdit;
    QLineEdit *usernameLineEdit;
    QLineEdit *enrolltimeLineEdit;
    QLineEdit *workstypeLineEdit;
    QLineEdit *worksnumLineEdit;
    QLineEdit *totalrateLineEdit;

    void setupUi(QWidget *ModifyWidget)
    {
        if (ModifyWidget->objectName().isEmpty())
            ModifyWidget->setObjectName(QString::fromUtf8("ModifyWidget"));
        ModifyWidget->resize(712, 488);
        returnButton = new QPushButton(ModifyWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(610, 450, 81, 23));
        deleteButton = new QPushButton(ModifyWidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));
        deleteButton->setGeometry(QRect(510, 360, 75, 23));
        modifyButton = new QPushButton(ModifyWidget);
        modifyButton->setObjectName(QString::fromUtf8("modifyButton"));
        modifyButton->setGeometry(QRect(140, 360, 75, 23));
        dusernameLineEdit = new QLineEdit(ModifyWidget);
        dusernameLineEdit->setObjectName(QString::fromUtf8("dusernameLineEdit"));
        dusernameLineEdit->setGeometry(QRect(540, 170, 113, 20));
        dusernameLabel = new QLabel(ModifyWidget);
        dusernameLabel->setObjectName(QString::fromUtf8("dusernameLabel"));
        dusernameLabel->setGeometry(QRect(420, 170, 81, 16));
        workstypeLabel = new QLabel(ModifyWidget);
        workstypeLabel->setObjectName(QString::fromUtf8("workstypeLabel"));
        workstypeLabel->setGeometry(QRect(60, 240, 51, 16));
        usernameLabel = new QLabel(ModifyWidget);
        usernameLabel->setObjectName(QString::fromUtf8("usernameLabel"));
        usernameLabel->setGeometry(QRect(60, 160, 54, 12));
        enrolltimeLabel = new QLabel(ModifyWidget);
        enrolltimeLabel->setObjectName(QString::fromUtf8("enrolltimeLabel"));
        enrolltimeLabel->setGeometry(QRect(60, 200, 61, 16));
        worksnumLabel = new QLabel(ModifyWidget);
        worksnumLabel->setObjectName(QString::fromUtf8("worksnumLabel"));
        worksnumLabel->setGeometry(QRect(60, 280, 61, 16));
        totalrateLable = new QLabel(ModifyWidget);
        totalrateLable->setObjectName(QString::fromUtf8("totalrateLable"));
        totalrateLable->setGeometry(QRect(60, 320, 71, 16));
        label = new QLabel(ModifyWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 20, 351, 31));
        label_2 = new QLabel(ModifyWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(400, 30, 261, 16));
        label_3 = new QLabel(ModifyWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 120, 54, 12));
        label_4 = new QLabel(ModifyWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(80, 60, 231, 16));
        line = new QFrame(ModifyWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(360, 30, 20, 371));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        idLineEdit = new QLineEdit(ModifyWidget);
        idLineEdit->setObjectName(QString::fromUtf8("idLineEdit"));
        idLineEdit->setGeometry(QRect(210, 120, 113, 20));
        usernameLineEdit = new QLineEdit(ModifyWidget);
        usernameLineEdit->setObjectName(QString::fromUtf8("usernameLineEdit"));
        usernameLineEdit->setGeometry(QRect(210, 160, 113, 20));
        enrolltimeLineEdit = new QLineEdit(ModifyWidget);
        enrolltimeLineEdit->setObjectName(QString::fromUtf8("enrolltimeLineEdit"));
        enrolltimeLineEdit->setGeometry(QRect(210, 200, 113, 20));
        workstypeLineEdit = new QLineEdit(ModifyWidget);
        workstypeLineEdit->setObjectName(QString::fromUtf8("workstypeLineEdit"));
        workstypeLineEdit->setGeometry(QRect(210, 240, 113, 20));
        worksnumLineEdit = new QLineEdit(ModifyWidget);
        worksnumLineEdit->setObjectName(QString::fromUtf8("worksnumLineEdit"));
        worksnumLineEdit->setGeometry(QRect(210, 280, 113, 20));
        totalrateLineEdit = new QLineEdit(ModifyWidget);
        totalrateLineEdit->setObjectName(QString::fromUtf8("totalrateLineEdit"));
        totalrateLineEdit->setGeometry(QRect(210, 320, 113, 20));

        retranslateUi(ModifyWidget);

        QMetaObject::connectSlotsByName(ModifyWidget);
    } // setupUi

    void retranslateUi(QWidget *ModifyWidget)
    {
        ModifyWidget->setWindowTitle(QCoreApplication::translate("ModifyWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("ModifyWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        deleteButton->setText(QCoreApplication::translate("ModifyWidget", "\345\210\240 \351\231\244", nullptr));
        modifyButton->setText(QCoreApplication::translate("ModifyWidget", "\344\277\256 \346\224\271", nullptr));
        dusernameLabel->setText(QCoreApplication::translate("ModifyWidget", "\345\276\205\345\210\240\351\231\244\347\224\250\346\210\267\345\220\215", nullptr));
        workstypeLabel->setText(QCoreApplication::translate("ModifyWidget", "\344\275\234\345\223\201\347\261\273\345\236\213", nullptr));
        usernameLabel->setText(QCoreApplication::translate("ModifyWidget", "\347\224\250\346\210\267\345\220\215", nullptr));
        enrolltimeLabel->setText(QCoreApplication::translate("ModifyWidget", "\346\263\250\345\206\214\346\227\266\351\227\264", nullptr));
        worksnumLabel->setText(QCoreApplication::translate("ModifyWidget", "\344\275\234\345\223\201\346\225\260\351\207\217", nullptr));
        totalrateLable->setText(QCoreApplication::translate("ModifyWidget", "\344\275\234\345\223\201\346\200\273\350\257\204\345\210\206", nullptr));
        label->setText(QCoreApplication::translate("ModifyWidget", "\345\246\202\346\236\234\346\203\263\344\277\256\346\224\271\344\277\241\346\201\257\357\274\214\350\257\267\350\276\223\345\205\245\345\276\205\344\277\256\346\224\271\347\224\250\346\210\267\347\232\204\345\216\237ID", nullptr));
        label_2->setText(QCoreApplication::translate("ModifyWidget", "\345\246\202\346\236\234\346\203\263\345\210\240\351\231\244\344\277\241\346\201\257\357\274\214\350\257\267\350\276\223\345\205\245\345\276\205\345\210\240\351\231\244\344\277\241\346\201\257\347\232\204\347\224\250\346\210\267\345\220\215\357\274\232", nullptr));
        label_3->setText(QCoreApplication::translate("ModifyWidget", "ID", nullptr));
        label_4->setText(QCoreApplication::translate("ModifyWidget", "\344\270\216\346\226\260\344\277\241\346\201\257\357\274\210ID\344\270\215\345\217\257\344\277\256\346\224\271\357\274\211\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ModifyWidget: public Ui_ModifyWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFYWIDGET_H
