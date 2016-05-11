#include "senoide.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <cmath>
#include <QMouseEvent>
#include <QDebug>

Senoide::Senoide(QWidget *parent) : QWidget(parent)
{
  Amp = 0.8;
  Freq = 1;
  Angle = 0;
  varAngle = 0;
  startTimer(20); // executa o timer a cada 20 ms
  setMouseTracking(true);
}

void Senoide::setVarAngle(int var)
{
  varAngle = var*0.1/99; // CUIDADO com divisao inteira
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
    yf = height()/2 - height()/2*Amp*sin(Freq*x*6.28/width()+Angle) ;
    painter.drawLine(xi, yi, xf, yf);
    xi = xf; yi = yf;
  }
}

void Senoide::timerEvent(QTimerEvent *e)
{
  Angle += varAngle;
  if(Angle >= 6.28){
    Angle = 0;
  }
  repaint();
}

void Senoide::mouseMoveEvent(QMouseEvent *e)
{
  //qDebug() << e->pos().x() << " " <<
    //          e->pos().y();

  emit posx(e->pos().x());
  emit posy(e->pos().y());
}

void Senoide::setAmp(int a){
  Amp = a/99.0;
}

void Senoide::setW(int w){
  Freq = w;
}






