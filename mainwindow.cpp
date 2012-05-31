#include "mainwindow.h"

#include "ui_mainwindow.h"

#include "Qshortcut"



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

void MainWindow::on_num0Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"0 ");



        }



void MainWindow::on_num1Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"1 ");



        }



void MainWindow::on_num2Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"2 ");



        }



void MainWindow::on_num3Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"3 ");



        }



void MainWindow::on_num4Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"4 ");



        }



void MainWindow::on_num5Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"5 ");



        }



void MainWindow::on_num6Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"6 ");



        }



void MainWindow::on_num7Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"7 ");



        }



void MainWindow::on_num8Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"8 ");



        }



void MainWindow::on_num9Button_clicked()

{



   ui->LigneEdition->setText(ui->LigneEdition->text()+"9 ");



        }









