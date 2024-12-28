#include "mainwindow.h"
#include "ui_mainwindow.h"

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

void MainWindow::on_btn_Add_clicked()
{

    if(!ui->txt_Task->text().isEmpty())
    {
      QListWidgetItem* itm = new QListWidgetItem(ui->txt_Task->text(),ui->listWidget); // Create item
      itm->setFlags(itm->flags() |Qt::ItemIsEditable);
      ui->listWidget->addItem(itm);  // Add nw Item to the list
      ui->txt_Task->clear();  // Clear the line
    }
    ui->txt_Task->setFocus();  // keep the cursor on the Input line

}


void MainWindow::on_btn_rm_clicked()
{
    QListWidgetItem* itm = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete itm ;
}


void MainWindow::on_btn_rm_all_clicked()
{
    ui->listWidget->clear();

}

