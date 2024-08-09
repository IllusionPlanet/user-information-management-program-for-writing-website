#include "checkwidget.h"
#include "ui_checkwidget.h"

void deleteLlist(userinfo *head){
    userinfo *p = head, *q;
    while(p->next != NULL){
        q = p->next;
        p->next = q->next;
        delete q;
    }
    delete p;
}

CheckWidget::CheckWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CheckWidget)
{
    ui->setupUi(this);
}

CheckWidget::~CheckWidget()
{
    delete ui;
}

void CheckWidget::on_returnButton_clicked(){
    emit display(0);
}

void CheckWidget::on_checkButton_clicked(){
    QString username, enrolltime, workstype; long id; int worksnum, totalrate; double averagerate;
    if(ui->checkByUsernameLineEdit->text() == ""){
        QMessageBox::about(NULL, "提示", "用户名为空！");
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
    QString usernamec = ui->checkByUsernameLineEdit->text();
    for(p = h->next; p->next != NULL; p = p->next){
        if(p->username == usernamec){
            ui->showIDLabel->setText(QString::number(p->id));
            ui->showEnrolltimeLabel->setText(p->enrolltime);
            ui->showWorkstypeLabel->setText(p->workstype);
            ui->showWorksnumLabel->setText(QString::number(p->worksnum));
            ui->showTotalrateLabel->setText(QString::number(p->totalrate));
            ui->showAverageLabel->setText(QString::number(p->averagerate, 'f' ,2));
            tag = true;
            break;
        }
    }
    if(!tag)
        QMessageBox::about(NULL, "提示", "用户名不存在！");
    deleteLlist(h);
}
