#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <QString>
#include "dialog.h"

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

void MainWindow::copiaTexto()
{
  QString s;
  s = ui->textEditSrc->toPlainText() +
      ": " +
      QString::number(ui->horizontalSlider->value());
  s = ui->textEditSrc->toPlainText() +
      ": " +
      QString().setNum(ui->horizontalSlider->value());
  qDebug() << ui->textEditSrc->toPlainText();
  ui->textBrowserDst->setText(s);
}

void MainWindow::editConfig()
{
  Dialog d; // #include "dialog.h"
  d.setHorizontalSliderValue(35);
  if(d.exec() == QDialog::Accepted){
    qDebug() << d.getHorizontalSliderValue();
    qDebug() << "clicou ok";
  }
  else{
    qDebug() << "clicou cancel";
  }
}











