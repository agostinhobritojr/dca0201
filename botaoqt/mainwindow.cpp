#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <cstdlib>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  connect(ui->pushButtonQuit, // emissor do sinal
          SIGNAL(clicked(bool)), // sinal
          this, // receptor
          SLOT(mataTudo())); // slot do receptor
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::mataTudo(){
  QMessageBox msg;
  msg.setText("morre, infiliz!");
  msg.exec();
  exit(0);
}
