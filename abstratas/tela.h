#ifndef TELA_H
#define TELA_H
#include <vector>
#include <iostream>

using namespace std;

class Tela{
  int nlin, ncol;
  char padrao;
  vector< vector<char> > mat;
public:
  Tela(int nlin, int ncol);
  void setPixel(int x, int y);
  void clear();
  void setBrush(char padrao);
  friend ostream& operator<<(ostream &os, Tela &t);
};

#endif // TELA_H
