#include <iostream>
#include "retangulo.h"
#include "figurageometrica.h"
#include "reta.h"
#include "circulo.h"
#include <vector>

using namespace std;

int main(){
  vector<FiguraGeometrica*> figs;

  Retangulo r;
  Circulo c;
  Reta rt;

  FiguraGeometrica *f;

  figs.push_back(new Retangulo());
  figs.push_back(new Circulo());
  figs.push_back(new Reta());

  for(int i=0; i<figs.size(); i++){
    figs[i]->pos();
  }

  /*
  rt.pos();
  c.pos();
  r.pos();
  cout << endl;

  // POLIMORFISMO
  f = &rt;
  f->pos();

  f = &c;
  f->pos();

  f = &r;
  f->pos();
*/
  return 0;
}

