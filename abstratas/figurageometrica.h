#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "tela.h"
class FiguraGeometrica{
  int posx, posy;
public:
//  FiguraGeometrica();
  virtual void draw(Tela &t)=0;
};

#endif // FIGURAGEOMETRICA_H
