#ifndef MATRIZ_H
#define MATRIZ_H

class Matriz{
  int nlin;
  int ncol;
  float **x;
public:
  Matriz(int _nlin=0, int _ncol=0);
  ~Matriz();
};

#endif // MATRIZ_H
