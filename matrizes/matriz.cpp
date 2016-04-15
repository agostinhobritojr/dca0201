#include "matriz.h"
#include <cstdlib>

Matriz::Matriz(int nlin, int ncol){
  // guarda nlin e ncol
  this->ncol = ncol; this->nlin = nlin;
  x = NULL;

  // verifica as possibilidades de alocacao
  if(nlin <=0 || ncol <= 0){
    this->nlin = 0; this->ncol = 0;
    return;
  }

  // aloca array de ponteiros
  x = new float*[nlin];
  if(x == NULL){
    exit(0);
  }
  // aloca matriz em uma unica linha
  x[0]= new float[nlin*ncol];
  if(x[0] == NULL){
    exit(0);
  }
  // organiza o array
  // ex: matriz 3x4
  //  1 2 3 5 6 4 3 6 4 5
  //  ^     ^     ^
  //  |     |     |
  // x[0]  x[1]  x[2]
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
}

float& Matriz::operator () (int i, int j){
  if(i>=0 && i<nlin && j>=0 && j<ncol){
    return (x[i][j]);
  }
  exit(0);
}


ostream& operator<<(ostream& os, Matriz& m){
  for(int i=0; i<m.nlin; i++){
    for(int j=0; j<m.ncol; j++){
      os << m.x[i][j] << " ";
    }
    os << endl;
  }
  return os;
}






