#include "senoide.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QColor>

Senoide::Senoide(QWidget *parent) : QWidget(parent){

}

void Senoide::paintEvent(QPaintEvent *e){
  // cria o pintor que vai modificar a tela
  QPainter p(this);
  QPen pen;
  QBrush brush;


  // desenha um retangulo com o fundo da tela
  pen.setWidth(0);
  pen.setStyle(Qt::NoPen);
//  pen.setColor(QColor(230,230,0));
  brush.setColor(QColor(230,230,130));
  brush.setStyle(Qt::SolidPattern);
  p.setPen(pen);
  p.setBrush(brush);
  p.drawRect(0,0,width(),height());
}








