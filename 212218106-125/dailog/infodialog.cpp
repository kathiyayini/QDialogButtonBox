#include "infodialog.h"
#include "ui_infodialog.h"
#include "QDebug"

InfoDialog::InfoDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfoDialog)
{
    ui->setupUi(this);
}

InfoDialog::~InfoDialog()
{
    delete ui;
}

void InfoDialog::on_ok_clicked()
{
    accept();
        qDebug()<<"Ok button was clicked";

}

void InfoDialog::on_saveall_clicked()
{
    accept();
       qDebug()<<"SaveAll button was clicked";
}

void InfoDialog::on_save_clicked()
{
    accepted();
        qDebug()<<"Save button was clicked";

}

void InfoDialog::on_open_clicked()
{
    open();
       qDebug()<<"Open button was clicked";
}

void InfoDialog::on_no_clicked()
{
    reject();
       qDebug()<<"No button was clicked";
}

void InfoDialog::on_notoall_clicked()
{
    rejected();
        qDebug()<<"NoToAll button was clicked";
}

void InfoDialog::on_cancel_clicked()
{
    reject();
       qDebug()<<"Cancel button was clicked";

}
