#include <iostream>
#include "tela.h"
#include "retangulo.h"
#include "circulo.h"

using namespace std;

int main(){
  Tela t(20,15);
  t.clear();
  t.setBrush('#');
  t.setPixel(2,2);
  t.print();

  Retangulo r(0,0,20,15);
  Circulo c1(5,5,3), c2(15,10,3);

  t.clear();
  t.setBrush('#');
  r.draw(t);
  t.setBrush('O');
  c1.draw(t);
  t.setBrush('*');
  c2.draw(t);
  t.print();
  return 0;
}

