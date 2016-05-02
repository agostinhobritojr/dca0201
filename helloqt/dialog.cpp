#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
  QDialog(parent),
  ui(new Ui::Dialog)
{
  ui->setupUi(this);
}

Dialog::~Dialog()
{
  delete ui;
}

int Dialog::getHorizontalSliderValue(){
  return (ui->horizontalSlider->value());
}

void Dialog::setHorizontalSliderValue(int x){
  ui->horizontalSlider->setValue(x);
}





