#include <iostream>
#include "tela.h"
#include "retangulo.h"
#include "circulo.h"
#include "figurageometrica.h"

using namespace std;

int main(){
  Tela t(10,20);
  Circulo c(4,10,3);
  Retangulo r1(0,0,10,20);
  Retangulo r2(1,1,8,18);

  FiguraGeometrica *f[10];

  t.setPixel(2,2);
  t.setBrush('#');
  t.setPixel(3,3);
  t.setBrush('o');
//  r1.draw(t);
  f[0] = &r1;
  f[0]->draw(t);
  t.setBrush(' ');
  r2.draw(t);
  t.setBrush('@');
//  c.draw(t);
//  f = &c;
  f[1] = new Circulo(4,10,3);
  f[1]->draw(t);
  delete f[1];
  cout << "---8<---- " << endl;
  cout << t;
  cout << "---8<---- " << endl;
  return 0;
}

