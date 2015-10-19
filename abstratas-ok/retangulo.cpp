#include "retangulo.h"

Retangulo::Retangulo(int _x, int _y, int _largura, int _altura){
  x=_x; y=_y; largura=_largura; altura=_altura;
}

void Retangulo::draw(Tela &t){
  for(int i=x; i<x+largura; i++){
    for(int j=y; j<y+altura; j++){
      t.setPixel(i,j);
    }
  }
}
