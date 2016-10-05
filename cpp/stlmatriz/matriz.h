#ifndef MATRIZ_H
#define MATRIZ_H
#include <vector>
#include <valarray>
#include <cstdlib>
#include <iostream>

using namespace std;

// declaracao forward
template <class T>
class Matriz;

// declaracao forward
template <class T>
ostream& operator<<(ostream&, Matriz<T>&);

template <class T>
class Matriz{
  int nl, nc;
  vector< valarray<T> > x;
public:
  Matriz(int nl, int nc);
 // Matriz operator+();
  void randomize();
  friend ostream& operator<< <T> (ostream& os,
                                   Matriz<T> &m);
  Matriz operator+(Matriz<T> &m);
};

template <class T>
Matriz<T> Matriz<T>::operator+(Matriz<T> &m){
  if(nl == m.nl && nc == m.nc){
    Matriz<T> ret(nl, nc);
    for(int i=0; i<nl; i++){
      ret.x[i] = x[i] + m.x[i];
    }
    return(ret);
  }
  else{
    Matriz<T> ret;
    return(ret);
  }
}

template<class T>
ostream& operator<<(ostream& os, Matriz<T> &m){
  for(int i=0; i<m.nl; i++){
    for(int j=0; j<m.nc; j++){
      os << m.x[i][j] << " ";
    }
    os << endl;
  }
  return os;
}

template <class T>
Matriz<T>::Matriz(int nl, int nc){
  this->nc = nc; this->nl = nl;
  x = vector< valarray<T> > (nl, valarray<T>(nc));
  srand(time(0));
}

template <class T>
void Matriz<T>::randomize(){
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      x[i][j] = rand()%100;
    }
  }
}


#endif // MATRIZ_H

