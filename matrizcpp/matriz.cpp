//-----matriz.cpp--------8<----cut here -------

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

// construtor de copia
Matriz::Matriz(Matriz &m){
  nlin = m.nlin;
  ncol = m.ncol;
  x = new float*[ncol];
  x[0] = new float[nlin*ncol];
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
  // copia os elementos da matriz de referencia
  for(int i=0; i<nlin*ncol; i++){
    x[0][i] = m.x[0][i];
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

Matriz Matriz::operator+(Matriz &m){
  Matriz ret(nlin,ncol);
  for(int i=0; i<nlin*ncol; i++){
    ret.x[0][i] = x[0][i] + m.x[0][i];
  }
  return (ret);
}

Matriz Matriz::operator=(const Matriz &m){
  // verificar se a matriz repassada
  // eh a propria matriz que processa a
  // operacao

  // se o endereco de m eh igual ao endereco
  // do proprio objeto, retorne o proprio objeto
  // ex: Matriz m; m=m;
  if(&m == this){
    return(*this);
  }

  // erro
  if(x != 0){
    if(x[0] != 0){
      delete [] x[0];
      delete [] x;
    }
  }


  // o/o/o/o/o/
  // libera a matriz porventura alocada
  /*
  if(x != 0){
    if(x[0] != 0){
      delete [] x[0];
    }
    delete [] x;
  }
  */
  // aloca a nova matriz
  nlin = m.nlin;
  ncol = m.ncol;
  x = new float*[nlin];
  x[0] = new float[nlin*ncol];
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
  // copia os elementos da matriz de referencia
  for(int i=0; i<nlin*ncol; i++){
    x[0][i] = m.x[0][i];
  }
  return(*this);
}

//------------------8<----cut here --------------







