#include "tela.h"
#include <iostream>

using namespace std;

Tela::Tela(int largura, int altura){
  this->largura = largura;
  this->altura = altura;
  m = vector< vector<char> >
      (altura, vector<char>(largura,' '));
}

void Tela::clear(){
  for(int i=0; i<altura; i++){
    for(int j=0; j<largura; j++){
      m[i][j] = ' ';
    }
  }
}

void Tela::setBrush(char c){
  brush = c;
}

void Tela::setPixel(int x, int y){
  if(x>=0 && y>=0 && x<largura && y<altura){
    m[y][x] = brush;
  }
}

void Tela::print(){
  for(int i=0; i<altura; i++){
    for(int j=0; j<largura; j++){
      cout << m[i][j];
    }
    cout << endl;
  }
}

