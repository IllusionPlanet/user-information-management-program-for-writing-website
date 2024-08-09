#ifndef ADDUSERWIDGET_H
#define ADDUSERWIDGET_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QDebug>

namespace Ui {
class AddUserWidget;
}

class AddUserWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AddUserWidget(QWidget *parent = nullptr);
    ~AddUserWidget();

private:
    Ui::AddUserWidget *ui;

signals:
    void display(int number);

private slots:
    void on_returnButton_clicked();
    void on_addButton_clicked();
};

#endif // ADDUSERWIDGET_H
