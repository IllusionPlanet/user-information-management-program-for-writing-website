#include "sortwidget.h"
#include "ui_sortwidget.h"
#include <algorithm>

#define N 200

typedef struct TreeNode{
    QString username;
    long id;
    QString enrolltime;
    QString workstype;
    int worksnum;
    int totalrate;
    double averagerate;
    struct TreeNode *lchild;
    struct TreeNode *rchild;
}TreeNode, *Tree;

Tree createTree(Tree p){
    p = new TreeNode;
    p->lchild = NULL;
    p->rchild = NULL;
    return p;
}

void removeTree(Tree p){
    if(p == NULL){
        return;
    }
    removeTree(p->lchild);
    removeTree(p->rchild);
    delete p;
}

Tree insertTree_worksnum(Tree t, Tree s){
    if(t == NULL){
        t = createTree(t);
        t->username = s->username; t->id = s->id; t->enrolltime = s->enrolltime; t->workstype = s->workstype;
        t->worksnum = s->worksnum; t->totalrate = s->totalrate; t->averagerate = s->averagerate;
        return t;
    }
    if(s->worksnum > t->worksnum){
        t->lchild = insertTree_worksnum(t->lchild, s);
        return t;
    }
    if(s->worksnum <= t->worksnum){
        t->rchild = insertTree_worksnum(t->rchild, s);
        return t;
    }
}

Tree insertTree_averagerate(Tree t, Tree s){
    if(t == NULL){
        t = createTree(t);
        t->username = s->username; t->id = s->id; t->enrolltime = s->enrolltime; t->workstype = s->workstype;
        t->worksnum = s->worksnum; t->totalrate = s->totalrate; t->averagerate = s->averagerate;
        return t;
    }
    if(s->averagerate > t->averagerate){
        t->lchild = insertTree_averagerate(t->lchild, s);
        return t;
    }
    if(s->averagerate <= t->averagerate){
        t->rchild = insertTree_averagerate(t->rchild, s);
        return t;
    }
}

TreeNode tnode[N]; int i = 0;

void inOrder(Tree p){
    if(p->lchild != NULL)
        inOrder(p->lchild);
    tnode[i] = *p;
    i++;
    if(p->rchild != NULL)
        inOrder(p->rchild);
}

SortWidget::SortWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SortWidget)
{
    ui->setupUi(this);
    sortButtonGroup = new QButtonGroup;
    sortButtonGroup->addButton(ui->worksnumRadioButton, 0);
    sortButtonGroup->addButton(ui->averagerateRadioButton, 1);
    ui->averagerateRadioButton->setChecked(true);
    ui->tableWidget->setColumnCount(7);
    QStringList headerLabels;
    headerLabels << tr("用户名") << tr("ID") << tr("注册时间") << tr("作品类型") << tr("作品数量") << tr("作品总分")
                     << tr("作品平均分");
    ui->tableWidget->setHorizontalHeaderLabels(headerLabels);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

SortWidget::~SortWidget()
{
    delete ui;
}

void SortWidget::on_returnButton_clicked(){
    emit display(0);
}

void SortWidget::on_sortButton_clicked(){
    QString username, enrolltime, workstype; long id; int worksnum, totalrate; double averagerate;
    ui->tableWidget->clearContents();
    int sortTag = sortButtonGroup->checkedId();

    QFile file("userinfo.txt");
    file.open(QIODevice::ReadOnly|QIODevice::Text);
    if(!file.isOpen()){
        QMessageBox::about(NULL, "提示", "数据文件打开失败");
        return;
    }
    QTextStream inp(&file);

    Tree t = NULL;
    while(!inp.atEnd()){
        inp >> username >> id >> enrolltime >> workstype >> worksnum >> totalrate >> averagerate;
        Tree s = new TreeNode;
        s->username = username; s->id = id; s->enrolltime = enrolltime; s->workstype = workstype;
        s->worksnum = worksnum; s->totalrate = totalrate; s->averagerate = averagerate;
        s->lchild = NULL; s->rchild = NULL;
        switch(sortTag){
        case 0:
            t = insertTree_worksnum(t, s);//这是按照作品数量排序的情况
            break;
        case 1:
            t = insertTree_averagerate(t, s);//这是按照作品平均分排序的情况
            break;
        }
    }
    file.close();//t 就指向这棵二叉排序树的根节点
    //中序遍历开始
    inOrder(t);
    ui->tableWidget->setRowCount(i-1);
    for(int j = 0; j < i-1; ++j){
        ui->tableWidget->setItem(j, 0, new QTableWidgetItem(tnode[j].username));
        ui->tableWidget->setItem(j, 1, new QTableWidgetItem(QString::number(tnode[j].id)));
        ui->tableWidget->setItem(j, 2, new QTableWidgetItem(tnode[j].enrolltime));
        ui->tableWidget->setItem(j, 3, new QTableWidgetItem(tnode[j].workstype));
        ui->tableWidget->setItem(j, 4, new QTableWidgetItem(QString::number(tnode[j].worksnum)));
        ui->tableWidget->setItem(j, 5, new QTableWidgetItem(QString::number(tnode[j].totalrate)));
        ui->tableWidget->setItem(j, 6, new QTableWidgetItem(QString::number(tnode[j].averagerate, 'f', 2)));
    }
    i = 0;
    removeTree(t);
}
