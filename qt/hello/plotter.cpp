#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <QColor>
#include <cmath>

Plotter::Plotter(QWidget *parent) : QWidget(parent){
  freq = 1;
  ampl = 1.0;
  veloc = 0;
  teta = 0.0;
}

void Plotter::paintEvent(QPaintEvent *e){
  QPainter painter(this);
  QBrush brush;
  QPen pen;
  int x1, y1, x2, y2;

  // habilita o anti-aliasing para que as
  // linhas sejam desenhadas sem serrilhados
  painter.setRenderHint(QPainter::Antialiasing);

  // define as props do preenchimento
  brush.setColor(QColor(255,255,0));
  brush.setStyle(Qt::SolidPattern);

  // define as props da caneta
  pen.setColor(QColor(255,0,0));
  pen.setWidth(2);

  // comunica as mudancas ao objeto painter
  painter.setBrush(brush);
  painter.setPen(pen);

  // desenha um retangulo
  painter.drawRect(0,0,width(), height());

  // atualiza as propriedades da caneta
  pen.setColor(QColor(0,0,0));
  pen.setWidth(2);
  // atualiza a caneta e desenha o eixo
  // horizontal
  painter.setPen(pen);
  painter.drawLine(0,
                   height()/2,
                   width(),
                   height()/2);


  // atualiza as propriedades da caneta
  pen.setColor(QColor(0,0,255));
  pen.setWidth(1);
  // atualiza a caneta e desenha o eixo
  // horizontal
  painter.setPen(pen);


  // primeiro ponto
  x1 = 0;
  y1 = height()/2-
      height()/2*ampl*sin(2*M_PI*freq*x1+teta);

  for(int i=1; i<width(); i++){
    x2 = i;
    y2 = height()/2-
        height()/2*ampl*sin(2*M_PI*(freq*x2)/width()+teta);
    painter.drawLine(x1, y1, x2, y2);
    x1 = x2;
    y1 = y2;
  }

}

void Plotter::setAmplitude(int ampl)
{
  this->ampl = ampl/100.0;
  repaint();
}

void Plotter::setFrequencia(int freq){
  this->freq = freq/10.0;
  repaint();
}

















