#include "mainwidget.h"
#include "ui_mainwidget.h"

MainWidget::MainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainWidget)
{
    ui->setupUi(this);

    menuwidget = new MenuWidget;
    adduserwidget = new AddUserWidget;
    checkwidget = new CheckWidget;
    typesearch = new TypeSearch;
    modifywidget = new ModifyWidget;
    sortwidget = new SortWidget;
    stackLayout = new QStackedLayout;

    stackLayout->addWidget(menuwidget);
    stackLayout->addWidget(adduserwidget);
    stackLayout->addWidget(checkwidget);
    stackLayout->addWidget(typesearch);
    stackLayout->addWidget(modifywidget);
    stackLayout->addWidget(sortwidget);

    setLayout(stackLayout);

    connect(menuwidget, &MenuWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(adduserwidget, &AddUserWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(checkwidget, &CheckWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(typesearch, &TypeSearch::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(modifywidget, &ModifyWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
    connect(sortwidget, &SortWidget::display, stackLayout, &QStackedLayout::setCurrentIndex);
}

MainWidget::~MainWidget()
{
    delete ui;
}
