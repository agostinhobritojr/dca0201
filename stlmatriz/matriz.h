#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>
#include <vector>
#include <valarray>
#include <cstdlib>
#include <algorithm>
#include <iterator>

using namespace std;

// declaracao "forward"
// adianta a definicao do tipo para
// a funcao que segue
template <class T>
class Matriz;

// adianta a definicao do prototipo da funcao
// para a classe que segue
template <class T>
ostream& operator<<(ostream&, Matriz<T>&);

template <class T>
class Matriz{
  int nl, nc;
  vector< valarray<T> > x;
public:
  Matriz(int nl=1, int nc=1);
  void randomize();
  friend ostream& operator<< <T> (ostream &os, Matriz<T> &m);
};

template <class T>
Matriz<T>::Matriz(int nl, int nc){
  this->nl = nl; this->nc = nc;
  x = vector< valarray<T> > (nl, valarray<T>(nc));
  srand(time(0));
}

template <class T>
T RandomNumber(){
  return(rand()%100);
}

template <class T>
void Matriz<T>::randomize(){
  for(int i=0; i<nl; i++){
//    generate(&x[i][0], &x[i][nc], RandomNumber<T>);
    generate(&x[i][0], &x[i][nc], RandomNumber<T>);
  }
}

template <class T>
ostream& operator<<(ostream& os, Matriz<T> &m){
  // #include <iterator>
  ostream_iterator<T> output(os," ");
  os << "[";
  for(int i=0; i<m.nl; i++){
    if(i==0)
      os << "[";
    else
      os << " [";
    copy(&m.x[i][0], &m.x[i][m.nc], output);
    os << "]";
    if(i < m.nl - 1)
      os << endl;
  }
  os << "]" << endl;
  return(os);
}

#endif // MATRIZ_H













