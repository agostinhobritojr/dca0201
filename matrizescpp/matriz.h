#ifndef MATRIZ_H
#define MATRIZ_H
#include <iostream>

using namespace std;

class Matriz{
  /**
   * @brief nlin grava o numero de linhas;
   * ncol grava o numero de colunas
   */
  int nlin, ncol;
  // x eh o array que guarda a matriz
  float** x;
public:
  /**
   * @brief Matriz eh o construtor da classe
   * @param _nlin recebe qtde de linhas
   * @param _ncol recebe qtde de colunas
   */
  Matriz(int nlin=0, int ncol=0);
  ~Matriz();
  int getlinhas();
  int getcolunas();

  float& operator()(int i, int j);

  friend ostream& operator<< (ostream& os, Matriz& m);

  void operator= (Matriz &m);

};

#endif // MATRIZ_H
