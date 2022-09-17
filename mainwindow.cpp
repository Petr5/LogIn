#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonlogin_clicked()
{
    QString UserName = ui->line_LogInUserName_Edit->text();
    QString Password= ui->line_LogInUserName_Edit->text();
    if (UserName == "test" && Password == "test"){
        QMessageBox::information(this, "LogIn", "LogIn successfully");
        hide();
        profile = new Profile;
        profile->show();
    }
    else{
        QMessageBox::warning(this, "LogIn", "UserName or Password is incorrest");
    }
}
