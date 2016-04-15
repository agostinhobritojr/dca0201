#include "tela.h"

Tela::Tela(int nlin, int ncol){
  // cria array de chars de nlin x ncol elementos
  mat = vector< vector<char> > (nlin, vector<char> (ncol, ' '));
  padrao = '*';
  this->nlin = nlin;
  this->ncol = ncol;
}

void Tela::setPixel(int x, int y){
  if(x>=0 && x<nlin && y>=0 && y<ncol){
    mat[x][y] = padrao;
  }
}

void Tela::clear(){
  for(int i=0; i<nlin; i++){
    for(int j=0; j<ncol; j++){
      mat[i][j] = ' ';
    }
  }
}

void Tela::setBrush(char padrao){
  this->padrao = padrao;
}

ostream& operator<<(ostream &os, Tela &t){
  for(int i=0; i<t.nlin; i++){
    for(int j=0; j<t.ncol; j++){
      os << t.mat[i][j];
    }
    os << endl;
  }
  return os;
}









