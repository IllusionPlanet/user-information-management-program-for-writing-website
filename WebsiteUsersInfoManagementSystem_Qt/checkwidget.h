#ifndef CHECKWIDGET_H
#define CHECKWIDGET_H

#include <QWidget>
#include <QtDebug>
#include <QFile>
#include <QMessageBox>
#include "userinfo.h"

namespace Ui {
class CheckWidget;
}

class CheckWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CheckWidget(QWidget *parent = nullptr);
    ~CheckWidget();

private:
    Ui::CheckWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked();
    void on_checkButton_clicked();
};

#endif // CHECKWIDGET_H
