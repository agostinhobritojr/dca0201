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

Matriz::Matriz(Matriz &m){
  nlin = m.nlin; ncol = m.ncol;
  if(nlin == 0 || ncol == 0){
    x = 0;
    return;
  }
  // aloca a matriz
  x = new float*[nlin];
  x[0] = new float[nlin*ncol];
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1]+ncol;
  }
  // copiando os elementos de m.x
  // para a matriz local x
  for(int i=0; i<nlin*ncol; i++){
    x[0][i] = m.x[0][i];
  }
}

float& Matriz::operator () (int i, int j){
  if(i>=0 && i<nlin && j>=0 && j<ncol){
    return (x[i][j]);
  }
  exit(0);
}

void Matriz::randomize(){

  for(int i=0; i<nlin; i++){
    for(int j=0; j<ncol; j++){
      x[i][j] = random()%100;
    }
  }
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

Matriz& Matriz::operator =(const Matriz &m){
  // verifica se o objeto passado como referencia
  // eh o mesmo que opera a funcao
  if(this == &m){
    return (*this); // retorna o PROPRIO OBJETO
  }
  // a matriz interna ainda nao foi alocada
  if(x == 0){
    nlin = m.nlin; ncol = m.ncol;
    x = new float*[nlin];
    x[0] = new float[nlin*ncol];
    for(int i=1; i<nlin; i++){
      x[i] = x[i-1]+ncol;
    }
    // copiando os elementos de m.x
    // para a matriz local x
    for(int i=0; i<nlin*ncol; i++){
      x[0][i] = m.x[0][i];
    }
    return (*this);
  }
  if(nlin != m.nlin || ncol != m.ncol){
    delete [] x[0];
    x[0] = 0;
    delete [] x;
    x = 0;

    nlin = m.nlin; ncol = m.ncol;
    // realoca e copia a matriz
    x = new float*[nlin];
    x[0] = new float[nlin*ncol];
    for(int i=1; i<nlin; i++){
      x[i] = x[i-1]+ncol;
    }
  }
  // copiando os elementos de m.x
  // para a matriz local x
  for(int i=0; i<nlin*ncol; i++){
    x[0][i] = m.x[0][i];
  }
  return(*this);
}

// retorna um objeto da classe Matriz
// que sera copiado para outra funcao
// usando o construtor de copia
Matriz Matriz::operator+(const Matriz &m){
  Matriz ret(nlin, ncol);
  for(int i=0; i<nlin*ncol; i++){
    ret.x[0][i] = x[0][i] + m.x[0][i];
  }
  return ret;
}













