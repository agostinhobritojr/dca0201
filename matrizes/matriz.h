#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>

using namespace std;

class Matriz{
private:
  float **x;
  int nlin, ncol;
public:
  Matriz(int nlin=0, int ncol=0);
  Matriz(Matriz& m);
  friend ostream& operator<<(ostream& os, Matriz& m);
  float& operator()(int i, int j);
  void randomize();
  Matriz& operator=(const Matriz &m);
  Matriz operator+(const Matriz &m);
  Matriz operator*(const Matriz &m);
};

#endif // MATRIZ_H







