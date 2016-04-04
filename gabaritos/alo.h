#ifndef ALO_H
#define ALO_H
#include <iostream>

using namespace std;

template<class T>
class Alo{
  T x;
public:
  Alo();
  void print();
  // Alo x, y;
  // y = x.copia();
  Alo<T> copia();
};

template<class T>
void Alo<T>::print(){
  cout << x << endl;
}

template<class T>
Alo<T>::Alo(){
  cout << "construtor de alo\n";
  x = 3.5;
}

template<class T>
Alo<T> Alo<T>::copia(){
  Alo<T> maria, jose;
  return(maria+jose);
}

#endif // ALO_H

