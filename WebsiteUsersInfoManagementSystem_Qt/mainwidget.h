#ifndef MAINWIDGET_H
#define MAINWIDGET_H

#include <QWidget>
#include <QStackedLayout>
#include "menuwidget.h"
#include "adduserwidget.h"
#include "checkwidget.h"
#include "typesearch.h"
#include "modifywidget.h"
#include "sortwidget.h"

namespace Ui {
class MainWidget;
}

class MainWidget : public QWidget
{
    Q_OBJECT

public:
    explicit MainWidget(QWidget *parent = nullptr);
    ~MainWidget();

private:
    Ui::MainWidget *ui;

    MenuWidget *menuwidget;
    AddUserWidget *adduserwidget;
    CheckWidget *checkwidget;
    TypeSearch *typesearch;
    ModifyWidget *modifywidget;
    SortWidget *sortwidget;
    QStackedLayout *stackLayout;
};

#endif // MAINWIDGET_H
