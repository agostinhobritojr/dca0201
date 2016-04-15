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
  friend ostream& operator<<(ostream& os, Matriz& m);
  float& operator()(int i, int j);
};

#endif // MATRIZ_H







