#include "retangulo.h"

Retangulo::Retangulo(int px, int py, int larg, int alt)
{
  this->posx = posx;
  this->posy = posy;
  this->larg = larg;
  this->alt  = alt;
}

void Retangulo::draw(Tela &t){
  for(int i=posx; i<posx+larg; i++){
    for(int j=posy; j<posy+alt; j++){
      t.setPixel(i,j);
    }
  }
}
