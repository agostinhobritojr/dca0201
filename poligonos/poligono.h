#ifndef POLIGONO_H
#define POLIGONO_H
#include "point2d.h"

class Poligono{
  int nvertices;
  Point2d vert[100];
public:
  Poligono();
  void addVertice(float _x,
                  float _y);
  void print();
  void translada(float a, float b);
};

#endif // POLIGONO_H
