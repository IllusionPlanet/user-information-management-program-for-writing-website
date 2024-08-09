#ifndef SORTWIDGET_H
#define SORTWIDGET_H

#include <QWidget>
#include <QButtonGroup>
#include <QFile>
#include <QDebug>
#include <QMessageBox>
#include "userinfo.h"

namespace Ui {
class SortWidget;
}

class SortWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SortWidget(QWidget *parent = nullptr);
    ~SortWidget();

private:
    Ui::SortWidget *ui;
    QButtonGroup *sortButtonGroup;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked();
    void on_sortButton_clicked();
};

#endif // SORTWIDGET_H
