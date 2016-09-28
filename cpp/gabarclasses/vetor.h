#ifndef VETOR_H
#define VETOR_H

template <class T>
class Vetor{
private:
  T x, y;
public:
  Vetor(T _x, T _y);
  void setX(T _x);
  T getX(void);
};

template <class T>
Vetor<T>::Vetor(T _x, T _y){
  x = _x;
  y = _y;
}

template <typename T>
void Vetor<T>::setX(T _x){
  x = _x;
}

template <class T>
T Vetor<T>::getX(void){
  return x;
}

#endif // VETOR_H

