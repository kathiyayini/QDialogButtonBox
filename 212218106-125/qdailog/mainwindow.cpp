#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<infodialog.h>
#include<QDebug>
#include<QDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    {
        InfoDialog *dialog=new InfoDialog(this);
        /*
        int ret=dialog->exec();
        if(ret==QDialog::Accepted)
        {
            QString position=dialog->getPosition();
            QString os=dialog->getFavos();
            qDebug()<<"Dialog was Accepted ,Position is "<<position<<" and your Favourite OS is "<<os;
            ui->label->setText("Your position is: "+position+" and your Favourite OS is "+os);
        }
        */
        connect(dialog,&InfoDialog::accepted,[=](){
            QString position=dialog->getPosition();
            QString os=dialog->getFavos();
            qDebug()<<"Dialog was Accepted ,Position is "<<position<<" and your Favourite OS is "<<os;
            ui->label->setText("Your position is: "+position+" and your Favourite OS is "+os);
        });
                connect(dialog,&InfoDialog::rejected,[=](){
                    QString position=dialog->getPosition();
                    QString os=dialog->getFavos();
                    qDebug()<<"Dialog Rejected";

                });
                dialog->show();
                dialog->raise();
                dialog->activateWindow();

}
}
