#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>

using namespace std;

class Matriz{
  int nlin;
  int ncol;
  float **x;
public:
  Matriz(int _nlin=0, int _ncol=0);
  Matriz(Matriz &m);
  ~Matriz();
  // a funcao operator<< eh declarada como amiga
  // para acelerar o processo de acesso aos elementos
  // da matriz
  friend ostream& operator<<(ostream& os, Matriz& m);
  float& operator()(int i, int j);
  void random();
  Matriz operator+(Matriz &m);
  Matriz operator=(const Matriz &m);
};

#endif // MATRIZ_H
