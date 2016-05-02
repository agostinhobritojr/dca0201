#include "senoide.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <cmath>

Senoide::Senoide(QWidget *parent) : QWidget(parent)
{
  Amp = 0.8;
  Freq = 1;
  Angle = 0;
}

void Senoide::paintEvent(QPaintEvent *e){
  QPainter painter(this);
  QBrush brush; // preenchimento
  QPen pen; // contorno

  painter.setRenderHint(QPainter::Antialiasing);

  // caneta de desenho de contornos do fundo do grafico
  pen.setColor(QColor(255,0,0));
  painter.setPen(pen);


  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);
  painter.setBrush(brush);

  // desenha o fundo da tela
  painter.drawRect(0,0,width()-1, height()-1);

  // desenha linha vermelha horiz no centro do grafico
  painter.drawLine(0,height()/2,width(),height()/2);

  // redefine a caneta para desenhar com azul
  pen.setColor(QColor(0,0,255));

  pen.setWidth(3);
  painter.setPen(pen);

  int xi, yi, xf, yf; //x e y, inicial e final
  xi = 0;
  yi = height()/2;
  for(int x=1; x<width(); x++){
    xf = x;
    yf = height()/2 - height()/2*Amp*sin(Freq*x*6.28/width()) ;
    painter.drawLine(xi, yi, xf, yf);
    xi = xf; yi = yf;
  }
}








