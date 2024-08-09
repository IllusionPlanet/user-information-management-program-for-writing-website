/********************************************************************************
** Form generated from reading UI file 'typesearch.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPESEARCH_H
#define UI_TYPESEARCH_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TypeSearch
{
public:
    QLabel *label;
    QLineEdit *typeLineEdit;
    QPushButton *searchButton;
    QTableWidget *tableWidget;
    QPushButton *returnButton;

    void setupUi(QWidget *TypeSearch)
    {
        if (TypeSearch->objectName().isEmpty())
            TypeSearch->setObjectName(QString::fromUtf8("TypeSearch"));
        TypeSearch->resize(716, 490);
        label = new QLabel(TypeSearch);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(130, 50, 511, 21));
        typeLineEdit = new QLineEdit(TypeSearch);
        typeLineEdit->setObjectName(QString::fromUtf8("typeLineEdit"));
        typeLineEdit->setGeometry(QRect(470, 50, 113, 20));
        searchButton = new QPushButton(TypeSearch);
        searchButton->setObjectName(QString::fromUtf8("searchButton"));
        searchButton->setGeometry(QRect(320, 110, 75, 23));
        tableWidget = new QTableWidget(TypeSearch);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(95, 171, 531, 241));
        returnButton = new QPushButton(TypeSearch);
        returnButton->setObjectName(QString::fromUtf8("returnButton"));
        returnButton->setGeometry(QRect(590, 440, 75, 23));

        retranslateUi(TypeSearch);

        QMetaObject::connectSlotsByName(TypeSearch);
    } // setupUi

    void retranslateUi(QWidget *TypeSearch)
    {
        TypeSearch->setWindowTitle(QCoreApplication::translate("TypeSearch", "Form", nullptr));
        label->setText(QCoreApplication::translate("TypeSearch", "\350\246\201\346\214\211\347\205\247\344\275\234\345\223\201\347\261\273\345\236\213\346\243\200\347\264\242\347\224\250\346\210\267\357\274\214\350\257\267\350\276\223\345\205\245\345\257\271\345\272\224\347\232\204\344\275\234\345\223\201\347\261\273\345\236\213\357\274\232", nullptr));
        searchButton->setText(QCoreApplication::translate("TypeSearch", "\346\243\200 \347\264\242", nullptr));
        returnButton->setText(QCoreApplication::translate("TypeSearch", "\344\270\273\350\217\234\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TypeSearch: public Ui_TypeSearch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPESEARCH_H
