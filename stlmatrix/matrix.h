#ifndef MATRIX_H
#define MATRIX_H
#include <vector>
#include <valarray>
#include <iterator>
#include <algorithm>
#include <cstdlib>

using namespace std;

// declaracao forward da classe Matrix
template<class T>
class Matrix;

template<class T>
ostream& operator<<(ostream&, Matrix<T>&);

template <class T>
class Matrix{
  int nl, nc;
  vector< valarray<T> > x;
public:
  Matrix(int nl=1, int nc=1);
  friend ostream& operator<< <T> (ostream& os,
                                  Matrix<T> &m);
  void randomize();
  Matrix operator+(Matrix<T>& m);
};

template<class T>
Matrix<T> Matrix<T>::operator +(Matrix<T>& m){
  if(nl == m.nl && nc == m.nc){
    Matrix<T> ret(nl, nc);
    for(int i=0; i<nl; i++){
      ret.x[i] = x[i]+m.x[i];
    }
    return ret;
  }
  else{
    Matrix<T> ret;
    return ret;
  }
}

template<class T>
T RandomNumber(){
  return(std::rand()%100);
}

template<class T>
void Matrix<T>::randomize(){
  for(int i=0; i<nl; i++){
    generate(&x[i][0],&x[i][nc],RandomNumber<T>);
  }
}


template <class T>
Matrix<T>::Matrix(int nl, int nc){
  this->nl = nl;
  this->nc = nc;
  x = vector< valarray<T> >(nl, valarray<T>(nc));
  srand(time(0));
}

template <class T>
ostream& operator<<(ostream& os, Matrix<T> &m){
  ostream_iterator<T> output(os," ");
  os << "[";
  for(int i=0; i<m.nl; i++){
    if(i==0) os << "[";
    else os << " [";
    copy(&m.x[i][0],&m.x[i][m.nc],output);
    os << "]";
    if(i < m.nl - 1) os << endl;
  }
  os << "]" << endl;
  return(os);
}

#endif // MATRIX_H
