#include "modifywidget.h"
#include "ui_modifywidget.h"

void deleteLinklis(userinfo *head){
    userinfo *p = head, *q;
    while(p->next != NULL){
        q = p->next;
        p->next = q->next;
        delete q;
    }
    delete p;
}

ModifyWidget::ModifyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ModifyWidget)
{
    ui->setupUi(this);
}

ModifyWidget::~ModifyWidget()
{
    delete ui;
}

void ModifyWidget::on_returnButton_clicked(){
    emit display(0);
}

void ModifyWidget::on_deleteButton_clicked(){
    QString username, enrolltime, workstype; long id; int worksnum, totalrate; double averagerate;
    if(ui->dusernameLineEdit->text() == ""){
        QMessageBox::about(NULL, "提示", "用户名不能为空！");
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
    QString usernamed = ui->dusernameLineEdit->text();
    bool tag = false;
    for(p = h; p->next != NULL; p = p->next){
        if(p->next->username == usernamed){
            userinfo *q = p->next;
            p->next = p->next->next;
            delete q;
            tag = true;
            break;
        }
    }
    if(tag){
        QMessageBox::about(NULL, "提示", "删除成功");
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        if(!file.isOpen()){
            QMessageBox::about(NULL, "提示", "数据文件打开失败");
            return;
        }
        QTextStream out(&file);
        p = h;
        while(p->next->next != NULL){
            p = p->next;
            out << p->username << " " << p->id << " " << p->enrolltime << " " << p->workstype
                << " " << p->worksnum << " " << p->totalrate << " " << p->averagerate << endl;
        }
        file.close();
    }
    else{
        QMessageBox::about(NULL, "提示", "用户名不存在！");
    }
    ui->dusernameLineEdit->clear();
    deleteLinklis(h);
}

void ModifyWidget::on_modifyButton_clicked(){
    QString username, enrolltime, workstype; long id; int worksnum, totalrate; double averagerate;
    if(ui->idLineEdit->text() == "" || ui->usernameLineEdit->text() == "" || ui->enrolltimeLineEdit->text() == "" || ui->workstypeLineEdit->text() == ""
            || ui->worksnumLineEdit->text() == "" || ui->totalrateLineEdit->text() == ""){
        QMessageBox::about(NULL, "提示", "存在空项");
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
    long idt = ui->idLineEdit->text().toLong();
    for(p = h->next; p->next != NULL; p = p->next){
        if(p->id == idt){
            p->username = ui->usernameLineEdit->text();
            p->enrolltime = ui->enrolltimeLineEdit->text();
            p->workstype = ui->workstypeLineEdit->text();
            p->worksnum = ui->worksnumLineEdit->text().toInt();
            p->totalrate = ui->totalrateLineEdit->text().toInt();
            p->averagerate = p->totalrate / (double)p->worksnum;
            tag = true;
            break;
        }
    }
    if(tag){
        QMessageBox::about(NULL, "提示", "修改成功");
        file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Truncate);
        if(!file.isOpen()){
            QMessageBox::about(NULL, "提示", "数据文件打开失败");
            return;
        }
        QTextStream out(&file);
        p = h;
        while(p->next->next != NULL){
            p = p->next;
            out << p->username << " " << p->id << " " << p->enrolltime << " " << p->workstype
                << " " << p->worksnum << " " << p->totalrate << " " << p->averagerate << endl;
        }
        file.close();
    }
    else{
        QMessageBox::about(NULL, "提示", "ID不存在！");
    }
    ui->idLineEdit->clear();
    ui->usernameLineEdit->clear();
    ui->enrolltimeLineEdit->clear();
    ui->workstypeLineEdit->clear();
    ui->worksnumLineEdit->clear();
    ui->totalrateLineEdit->clear();
    deleteLinklis(h);
}
