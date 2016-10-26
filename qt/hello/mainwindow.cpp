#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow){
  ui->setupUi(this);

  connect(ui->pushButtonMorre,
          SIGNAL(clicked(bool)),
          this,
          SLOT(finaliza()));

  connect(ui->horizontalSliderVeloc,
          SIGNAL(valueChanged(int)),
          ui->widgetPlotter,
          SLOT(setVelocidade(int)));

  connect(ui->widgetPlotter,
          SIGNAL(posx(int)),
          ui->lcdNumberX,
          SLOT(display(int)));

  connect(ui->widgetPlotter,
          SIGNAL(posy(int)),
          ui->lcdNumberY,
          SLOT(display(int)));

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::finaliza()
{
  exit(0);
}

void MainWindow::copiaTexto()
{
  ui->textEditRight->setPlainText(
        ui->textEditLeft->toPlainText());
}

void MainWindow::mostraLcd(int value)
{
  ui->lcdNumber->display(value);
}

void MainWindow::mostraDialogo()
{
  Dialog d;
  d.exec();
}













