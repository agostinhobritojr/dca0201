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

Matriz::Matriz(Matriz &m){
  nlin = m.nlin;
  ncol = m.ncol;
  if(nlin == 0 || ncol == 0){
    x == nullptr;
    return;
  }
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
  // copia a matriz o objeto fornecido
  // para a matriz local
  for(int i=0; i<nlin*ncol; i++){
    x[0][i] = m.x[0][i];
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

Matriz& Matriz::operator=(const Matriz &m){
  // O proprio objeto 'm' e o que opera
  // a funcao 'operator='
  // Matriz A;
  // A = A;
  if(&m == this){
    return(*this);
  }

  // Matriz A(3,3), B;
  // A = B;
  if(m.nlin == 0 || m.ncol == 0){
    if(nlin != 0 && ncol != 0){
      delete [] x[0];
      delete [] x;
      x = nullptr;
      nlin = ncol = 0;
    }
    return(*this);
  }

  // Matriz B ainda nao alocada
  // Matriz A(3,3), B;
  // B = A;
  if(x == nullptr){
    if(m.nlin == 0 || m.ncol == 0){
      return (*this);
    }
    nlin = m.nlin;
    ncol = m.ncol;
    // aloca recursos para armazenar a
    // matriz a ser copiada
    x = new float*[nlin];
    if(x == nullptr){
      exit(0);
    }
    x[0] = new float[nlin*ncol];
    for(int i=1; i<nlin; i++){
      x[i] = x[i-1] + ncol;
    }
    // copiar a matriz
    for(int i=0; i<nlin*ncol; i++){
      x[0][i] = m.x[0][i];
    }
    return (*this);
  }

  //. matrizes com tamanhos diferentes
  //.. liberar memoria ja alocada
  //.. alocar novos recursos
  if(nlin != m.nlin || ncol!= m.ncol){
    // memoria de array eh alocada com
    // new[]. Deve ser liberada com
    // delete[]
    delete [] x[0];
    delete [] x;

    nlin = m.nlin;
    ncol = m.ncol;

    // aloca a nova matriz
    x = new float*[nlin];
    if(x == nullptr){
      exit(0);
    }
    x[0] = new float[nlin*ncol];
    if(x[0] == nullptr){
      exit(0);
    }
    for(int i=1; i<nlin; i++){
      x[i] = x[i-1] + ncol;
    }
    // copia a matriz m.x -> x
    for(int i=0; i<nlin*ncol; i++){
      x[0][i] = m.x[0][i];
    }
  }
  // situacao onde as dimensoes das
  // matrizes sao identicas
  else{
    for(int i=0; i<nlin*ncol; i++){
      x[0][i] = m.x[0][i];
    }
  }
  return(*this);
}

Matriz Matriz::operator+(Matriz &m){
  // supor que as matrizes tem o mesmo tamanho
  Matriz ret(nlin, ncol);
  for(int i=0; i<nlin*ncol; i++){
    ret.x[0][i] = x[0][i] + m.x[0][i];
  }
  return(ret);
}

