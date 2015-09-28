#ifndef VETOR_H
#define VETOR_H

template <class T>
class Vetor{
  T x, y;
public:
  void setX(T _x);
  T getX(void);
  Vetor operator+(Vetor v);
};

template <class T>
void Vetor<T>::setX(T _x){
  T dica, dica2;
  x = _x;
}

template <class T>
T Vetor<T>::getX(void){
  return(x);
}

template <class T>
Vetor<T> Vetor<T>::operator+(Vetor<T> v){
  Vetor<T> ret;
  ret.x = x+v.x;
  ret.y = y+v.y;
  return ret;
}

#endif // VETOR_H
