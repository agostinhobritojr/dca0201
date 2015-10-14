#ifndef TELA_H
#define TELA_H
#include <vector>

using namespace std;

class Tela{
private:
  int altura, largura;
  char brush;
  vector< vector<char> > m;
public:
  Tela(int largura, int altura);
  void clear();
  void setBrush(char c);
  void setPixel(int x, int y);
  void print();
};

#endif // TELA_H
