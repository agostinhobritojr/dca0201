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

  // construtor de copia
  // serah usado para o retorno da funcao
  // operator+
  Matriz(Matriz& m);

  ~Matriz();
  int getlinhas();
  int getcolunas();

  // recupera/atribui valor
  float& operator()(int i, int j);

  // lanca matriz na saida
  friend ostream& operator<< (ostream& os, Matriz& m);

  // sobrecarga do operador =
  // é diferente de ...
  // Matriz A(3,3), B=A;
  Matriz& operator= (const Matriz &m);

  // soma de matrizes
  Matriz operator+ (Matriz &m);
};

#endif // MATRIZ_H
