#include "adduserwidget.h"
#include "ui_adduserwidget.h"

AddUserWidget::AddUserWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AddUserWidget)
{
    ui->setupUi(this);
}

AddUserWidget::~AddUserWidget()
{
    delete ui;
}

void AddUserWidget::on_returnButton_clicked(){
    emit display(0);
}

void AddUserWidget::on_addButton_clicked(){
    QString username = ui->usernameLineEdit->text();
    long id = ui->idLineEdit->text().toLong();
    QString enrolltime = ui->enrolltimeLineEdit->text();
    QString workstype = ui->workstypeLineEdit->text();
    int worksnum = ui->worksnumLineEdit->text().toInt();
    int totalrate = ui->totalrateLineEdit->text().toInt();
    double averagerate = totalrate / (double)worksnum;
    if(ui->usernameLineEdit->text()=="" || ui->idLineEdit->text()=="" ||
            ui->workstypeLineEdit->text()=="" || ui->worksnumLineEdit->text()=="" || ui->totalrateLineEdit->text()==""){
        QMessageBox::about(NULL, "提示", "存在空项");
        return;
    }
    QFile file("userinfo.txt");
    file.open(QIODevice::WriteOnly|QIODevice::Text|QIODevice::Append);
    if(!file.isOpen()){
        QMessageBox::about(NULL, "提示", "数据文件打开失败");
        return;
    }
    QTextStream out(&file);
    out << username << " " << id << " " << enrolltime << " " << workstype << " " <<
           worksnum << " " << totalrate << " " << averagerate << endl;
    file.close();
    QMessageBox::about(NULL, "提示", "添加成功");
    ui->usernameLineEdit->clear();
    ui->idLineEdit->clear();
    ui->enrolltimeLineEdit->clear();
    ui->workstypeLineEdit->clear();
    ui->worksnumLineEdit->clear();
    ui->totalrateLineEdit->clear();
}
