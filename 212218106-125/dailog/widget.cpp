#include "widget.h"
#include "ui_widget.h"
#include "infodialog.h"
#include "QDebug"
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_infoButton_clicked()
{
    InfoDialog *dialog=new InfoDialog(this);
       connect(dialog,&InfoDialog::accepted,[=](){
       qDebug()<<"Dialog was Accepted";
       });
       connect(dialog,&InfoDialog::rejected,[=](){
       qDebug()<<"Dialog was Rejected";
       });
       dialog->exec();
}
