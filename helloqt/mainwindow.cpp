#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  // conecta o click do botao com a
  // chamada da funcao finaliza()
  /*
  connect(ui->pushButtonJose,
          SIGNAL(clicked(bool)),
          this,
          SLOT(finaliza()));
          */
}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::finaliza()
{
  exit(0);
}
