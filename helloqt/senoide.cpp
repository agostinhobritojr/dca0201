#include "senoide.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>

Senoide::Senoide(QWidget *parent) : QWidget(parent)
{

}

void Senoide::paintEvent(QPaintEvent *e){
  QPainter painter(this);
  QBrush brush; // preenchimento
  QPen pen; // contorno

  // caneta de desenho de contornos do fundo do grafico
  pen.setColor(QColor(255,0,0));
  painter.setPen(pen);

  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);
  painter.setBrush(brush);

  painter.drawRect(0,0,width()-1, height()-1);
}








