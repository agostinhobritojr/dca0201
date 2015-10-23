#include "dialogvalue.h"
#include "ui_dialogvalue.h"

DialogValue::DialogValue(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::DialogValue)
{
  ui->setupUi(this);
}

DialogValue::~DialogValue()
{
  delete ui;
}

QString DialogValue::getValor()
{
  // devolve o QString armazenado no lineEdit
  return ui->lineEdit->text();
}

