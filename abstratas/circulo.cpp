#include "circulo.h"

Circulo::Circulo(int x, int y, int raio)
{
  this->x = x; this->y = y; this->raio = raio;
}

void Circulo::draw(Tela &t){
  for(int i = x-raio; i<=x+raio; i++){
    for(int j = y-raio; j<=y+raio; j++){
      if( (i-x)*(i-x)+(j-y)*(j-y) <= raio*raio ){
        t.setPixel(i,j);
      }
    }
  }
}
