#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
  int posx, posy;
  int larg, alt;
public:
  Retangulo(int posx, int posy, int larg, int alt);
  void draw();
};

#endif // RETANGULO_H
