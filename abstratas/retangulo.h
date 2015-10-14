#ifndef RETANGULO_H
#define RETANGULO_H
#include "figurageometrica.h"

class Retangulo : public FiguraGeometrica{
private:
  // canto superior esquerdo
  int x,y;
  // dimensoes
  int largura, altura;
public:
  Retangulo(int _x, int _y, int _largura, int _altura);
  void draw(Tela &t);
};

#endif // RETANGULO_H
