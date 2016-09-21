#include "matriz.h"
#include <cstdlib> // exit()

//#define NULL 0

Matriz::Matriz(int nlin, int ncol){
  // o ponteiro this aponta para o proprio
  // objeto
  this->nlin = nlin;
  this->ncol = ncol;

  // verificar se as dimensoes sao
  // corretas
  if(nlin<=0 || ncol<=0){
    this->nlin = this->ncol = 0;
    x = NULL;
    // sai do construtor para evitar
    // erros na alocacao dinamica de memoria
    return;
  }
  // aloca array de ponteiros auxiliares
  x = new float*[nlin];
  if(x == NULL){
    exit(0);
  }
  // aloca array para a matriz
  x[0] = new float[nlin*ncol];
  if(x[0] == NULL){
    exit(0);
  }
  // ajusta os enderecos do array de
  // ponteiros auxiliares
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
}

Matriz::~Matriz(){
  if(x != NULL){
    delete [] x[0];
    delete [] x;
  }
}

int Matriz::getlinhas(){
  return nlin;
}

int Matriz::getcolunas(){
  return ncol;
}

ostream& operator<< (ostream& os, Matriz& m){
  os << "[\n";
  for(int i=0; i<m.nlin; i++){
    os << "[";
    for(int j=0; j<m.ncol; j++){
      os << m.x[i][j] << " ";
    }
    os << "]\n";
  }
  os << "]";
  return(os);
}

float& Matriz::operator() (int i, int j){
  if(i>=0 && i<nlin && j>=0 && j<ncol){
    return(x[i][j]);
  }
  exit(0);
}

void Matriz::operator=(Matriz &m){

  //. matrizes com tamanhos diferentes
  //.. liberar memoria ja alocada
  //.. alocar novos recursos


  nlin = m.nlin;
  ncol = m.ncol;
}

