#include <iostream>
#include "tela.h"
#include "retangulo.h"

using namespace std;

int main(){
  Tela t(20,10);
  t.clear();
  t.setBrush('#');
  t.setPixel(2,2);
  t.print();

  Retangulo r(5,5,30,20);
  r.draw(t);
  cout << "--------------------------------";
  t.print();
  return 0;
}

