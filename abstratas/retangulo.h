#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
  int posx, posy;
  int larg, alt;
public:
  Retangulo(int px, int py, int larg, int alt);
  void draw(Tela &t);
};

#endif // RETANGULO_H
