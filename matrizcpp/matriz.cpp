#include "matriz.h"
#include <cstdlib>

Matriz::Matriz(int _nlin, int _ncol){
  nlin = _nlin; ncol = _ncol;
  if(nlin == 0 || ncol == 0){
    x = 0;
    return;
  }
  // aloca array auxiliar
  x = new float*[_nlin];
  // aloca matriz...
  x[0] = new float[nlin*ncol];
  // reorganiza os enderecos das linhas
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
}

Matriz::~Matriz(){
  if(x != 0){
    if(x[0] != 0){
      delete [] x[0];
    }
    delete [] x;
    x = 0;
  }
}

ostream& operator<<(ostream& os, Matriz& m){
  os << "[" ;
  for(int i=0; i<m.nlin; i++){
    os << "[";
    for(int j=0; j<m.ncol; j++){
      os << m.x[i][j];
      if(j < m.ncol-1 ) {
        os << ",";
      }
    }
    os << "]";
    if(i < m.nlin-1 ) {
      os << endl;
    }
  }
  os << "]";
  return os;
}

void Matriz::random(){
  for(int j=0; j<nlin*ncol; j++){
    x[0][j]=rand()%100;
  }
/*
  for(int i=0; i<nlin; i++){
    for(int j=0; j<ncol; j++){
      x[i][j]=rand()%100;
    }
  }
  */
}


float& Matriz::operator()(int i, int j){
  return(x[i][j]);
}

void Matriz::operator+(Matriz &m){
  Matriz ret(nlin,ncol);
  for(int i=0; i<nlin*ncol; i++){
    ret.x[0][i] = x[0][i] + m.x[0][i];
  }
  cout <<ret;
}











