#include "poligono.h"
#include <iostream>

using namespace std;

Poligono::Poligono()
{
  nvertices = 0;
}

void Poligono::addVertice(float _x, float _y){
  vert[nvertices].setX(_x);
  vert[nvertices].setY(_y);
  nvertices++;
}

void Poligono::print(){
  if(nvertices == 0)
    return;
  for(int i=0; i<nvertices-1;i++){
    vert[i].print();
    cout << "->";
  }
  vert[nvertices-1].print();
}

void Poligono::translada(float a, float b){
  for(int i=0; i<nvertices; i++){
    vert[i].translada(a,b);
  }
}











