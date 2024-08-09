/********************************************************************************
** Form generated from reading UI file 'sortwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SORTWIDGET_H
#define UI_SORTWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SortWidget
{
public:
    QPushButton *returnButton;
    QRadioButton *worksnumRadioButton;
    QRadioButton *averagerateRadioButton;
    QPushButton *sortButton;
    QTableWidget *tableWidget;
    QLabel *label;

    void setupUi(QWidget *SortWidget)
    {
        if (SortWidget->objectName().isEmpty())
            SortWidget->setObjectName(QString::fromUtf8("SortWidget"));
        SortWidget->resize(713, 490);
        returnButton = new QPushButton(SortWidget);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(610, 440, 81, 23));
        worksnumRadioButton = new QRadioButton(SortWidget);
        worksnumRadioButton->setObjectName(QString::fromUtf8("worksnumRadioButton"));
        worksnumRadioButton->setGeometry(QRect(190, 80, 89, 16));
        averagerateRadioButton = new QRadioButton(SortWidget);
        averagerateRadioButton->setObjectName(QString::fromUtf8("averagerateRadioButton"));
        averagerateRadioButton->setGeometry(QRect(450, 80, 89, 16));
        sortButton = new QPushButton(SortWidget);
        sortButton->setObjectName(QString::fromUtf8("sortButton"));
        sortButton->setGeometry(QRect(320, 130, 75, 23));
        tableWidget = new QTableWidget(SortWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(110, 170, 511, 251));
        label = new QLabel(SortWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 30, 571, 31));

        retranslateUi(SortWidget);

        QMetaObject::connectSlotsByName(SortWidget);
    } // setupUi

    void retranslateUi(QWidget *SortWidget)
    {
        SortWidget->setWindowTitle(QCoreApplication::translate("SortWidget", "Form", nullptr));
        returnButton->setText(QCoreApplication::translate("SortWidget", "\344\270\273\350\217\234\345\215\225", nullptr));
        worksnumRadioButton->setText(QCoreApplication::translate("SortWidget", "\344\275\234\345\223\201\346\225\260\351\207\217", nullptr));
        averagerateRadioButton->setText(QCoreApplication::translate("SortWidget", "\344\275\234\345\223\201\345\271\263\345\235\207\345\210\206", nullptr));
        sortButton->setText(QCoreApplication::translate("SortWidget", "\346\216\222 \345\272\217", nullptr));
        label->setText(QCoreApplication::translate("SortWidget", "\350\246\201\345\257\271\346\211\200\346\234\211\347\224\250\346\210\267\344\277\241\346\201\257\350\277\233\350\241\214\346\216\222\345\272\217\345\271\266\346\230\276\347\244\272\357\274\214\350\257\267\351\200\211\346\213\251\346\216\222\345\272\217\346\240\207\345\207\206\357\274\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SortWidget: public Ui_SortWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SORTWIDGET_H
