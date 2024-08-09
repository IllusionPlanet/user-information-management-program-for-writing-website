#include "typesearch.h"
#include "ui_typesearch.h"
#include <algorithm>

void deleteLlistt(userinfo *head){
    userinfo *p = head, *q;
    while(p->next != NULL){
        q = p->next;
        p->next = q->next;
        delete q;
    }
    delete p;
}

TypeSearch::TypeSearch(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TypeSearch)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(7);
    QStringList headerLabels;
    headerLabels << tr("用户名") << tr("ID") << tr("注册时间") << tr("作品类型") << tr("作品数量") << tr("作品总分")
                     << tr("作品平均分");
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

TypeSearch::~TypeSearch()
{
    delete ui;
}

void TypeSearch::on_returnButton_clicked(){
    emit display(0);
}

int k = 0;

void TypeSearch::on_searchButton_clicked(){
    QString username, enrolltime, workstype; long id; int worksnum, totalrate; double averagerate;
    if(ui->typeLineEdit->text() == ""){
        QMessageBox::about(NULL, "提示", "类型为空！");
        return;
    }
    QFile file("userinfo.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen()){
        QMessageBox::about(NULL, "提示", "数据文件打开失败");
        return;
    }
    QTextStream inp(&file);
    userinfo *h = new userinfo, *p = NULL;
    h->next = NULL;
    while(!inp.atEnd()){
        inp >> username >> id >> enrolltime >> workstype >> worksnum >> totalrate >> averagerate;
        userinfo *s = new userinfo;
        s->username = username; s->id = id; s->enrolltime = enrolltime; s->workstype = workstype;
        s->worksnum = worksnum; s->totalrate = totalrate; s->averagerate = averagerate;
        s->next = NULL;
        p = h;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = s;
    }
    file.close();
    bool tag = false;
    QString workstypet = ui->typeLineEdit->text();
    for(p = h->next; p->next != NULL; p = p->next){
        if(p->workstype == workstypet){
            ui->tableWidget->setRowCount(k+1);
            ui->tableWidget->setItem(k, 0, new QTableWidgetItem(p->username));
            ui->tableWidget->setItem(k, 1, new QTableWidgetItem(QString::number(p->id)));
            ui->tableWidget->setItem(k, 2, new QTableWidgetItem(p->enrolltime));
            ui->tableWidget->setItem(k, 3, new QTableWidgetItem(p->workstype));
            ui->tableWidget->setItem(k, 4, new QTableWidgetItem(QString::number(p->worksnum)));
            ui->tableWidget->setItem(k, 5, new QTableWidgetItem(QString::number(p->totalrate)));
            ui->tableWidget->setItem(k, 6, new QTableWidgetItem(QString::number(p->averagerate, 'f', 2)));
            tag = true;
            k++;
        }
    }
    if(tag == false){
        QMessageBox::about(NULL, "提示", "未找到该作品类型！");
        return;
    }
    k = 0;
    deleteLlistt(h);
}
