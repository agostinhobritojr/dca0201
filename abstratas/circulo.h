#ifndef CIRCULO_H
#define CIRCULO_H
#include "figurageometrica.h"

class Circulo: public FiguraGeometrica{
  int posx, posy, raio;
public:
  Circulo(int x, int y, int raio);
  void draw(Tela &t);
};

#endif // CIRCULO_H
