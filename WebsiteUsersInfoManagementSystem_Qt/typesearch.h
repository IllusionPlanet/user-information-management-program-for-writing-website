#ifndef TYPESEARCH_H
#define TYPESEARCH_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QtDebug>
#include "userinfo.h"

namespace Ui {
class TypeSearch;
}

class TypeSearch : public QWidget
{
    Q_OBJECT

public:
    explicit TypeSearch(QWidget *parent = nullptr);
    ~TypeSearch();

private:
    Ui::TypeSearch *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked();
    void on_searchButton_clicked();
};


#endif // TYPESEARCH_H
