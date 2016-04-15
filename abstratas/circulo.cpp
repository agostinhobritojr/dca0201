#include "circulo.h"

Circulo::Circulo(int x, int y, int raio){
  posx = x; posy = y; this->raio = raio;
}

void Circulo::draw(Tela &t){
  for(int i=posx-raio; i<=posx+raio; i++){
    for(int j=posy-raio; j<=posy+raio; j++){
      if((i-posx)*(i-posx)+(j-posy)*(j-posy) <= raio*raio){
        t.setPixel(i,j);
      }
    }
  }
}
