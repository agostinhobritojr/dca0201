#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
#include <cstdlib>

using namespace std;

template <class T, class U>
class Matriz{
public:
  int nlin;
  int ncol;
  T **x;
  Matriz(int _nlin=0, int _ncol=0);
  Matriz(Matriz<T,U> &m);
  ~Matriz();
  // a funcao operator<< eh declarada como amiga
  // para acelerar o processo de acesso aos elementos
  // da matriz
  friend ostream& operator<<(ostream& os, Matriz<T,U>& m);
  T& operator()(int i, int j);
  void random();
  void print();
  Matriz<T,U> operator+(Matriz<T,U> &m);
  Matriz<T,U> operator=(const Matriz<T,U> &m);
  Matriz<U,U> operator*(Matriz<T,U> &m);
};

//-----matriz.cpp--------8<----cut here -------

template <class T, class U>
Matriz<T,U>::Matriz(int _nlin, int _ncol){
  nlin = _nlin; ncol = _ncol;
  if(nlin == 0 || ncol == 0){
    x = 0;
    return;
  }
  // aloca array auxiliar
  x = new T*[_nlin];
  // aloca matriz...
  x[0] = new T[nlin*ncol];
  // reorganiza os enderecos das linhas
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
}

// construtor de copia
template <class T, class U>
Matriz<T,U>::Matriz(Matriz<T,U> &m){
  nlin = m.nlin;
  ncol = m.ncol;
  x = new T*[ncol];
  x[0] = new T[nlin*ncol];
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
  // copia os elementos da matriz de referencia
  for(int i=0; i<nlin*ncol; i++){
    x[0][i] = m.x[0][i];
  }
}

template<class T, class U>
Matriz<T,U>::~Matriz(){
  if(x != 0){
    if(x[0] != 0){
      delete [] x[0];
    }
    delete [] x;
    x = 0;
  }
}

template <class T, class U>
ostream& operator<<(ostream& os, Matriz<T,U>& m){
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

template <class T, class U>
void Matriz<T,U>::print(){
  cout << "[" ;
  for(int i=0; i<nlin; i++){
    cout << "[";
    for(int j=0; j<ncol; j++){
      cout << x[i][j];
      if(j < ncol-1 ) {
        cout << ",";
      }
    }
    cout << "]";
    if(i < nlin-1 ) {
      cout << endl;
    }
  }
}



template <class T, class U>
void Matriz<T,U>::random(){
  for(int j=0; j<nlin*ncol; j++){
    x[0][j]=rand()%10;
  }
}


template <class T, class U>
T& Matriz<T,U>::operator()(int i, int j){
  return(x[i][j]);
}

template <class T, class U>
Matriz<T,U> Matriz<T,U>::operator+(Matriz<T,U> &m){
  Matriz<T,U> ret(nlin,ncol);
  for(int i=0; i<nlin*ncol; i++){
    ret.x[0][i] = x[0][i] + m.x[0][i];
  }
  return (ret);
}

template <class T, class U>
Matriz<T,U> Matriz<T,U>::operator=(const Matriz<T,U> &m){
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
  cout << x << endl;
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
  x = new T*[nlin];
  x[0] = new T[nlin*ncol];
  for(int i=1; i<nlin; i++){
    x[i] = x[i-1] + ncol;
  }
  // copia os elementos da matriz de referencia
  for(int i=0; i<nlin*ncol; i++){
    x[0][i] = m.x[0][i];
  }
  return(*this);
}

template <class T, class U>
Matriz<U,U> Matriz<T,U>::operator*(Matriz<T,U> &m){
  U sum;
  Matriz<U,U> ret(nlin,m.ncol);
  // matrix sizes does not fit
  // return some trash.
  if(ncol != m.nlin){
    return ret;
  }
  for(int i=0; i<nlin; i++){
    for(int j=0; j<m.ncol; j++){
      sum = 0;
      for(int k=0; k<ncol; k++){
        sum = sum + x[i][k]*m.x[k][j];
      }
      ret.x[i][j] = sum;
    }
  }
  return (ret);
}

//------------------8<----cut here --------------

#endif // MATRIZ_H
