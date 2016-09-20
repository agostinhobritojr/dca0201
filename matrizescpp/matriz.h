#ifndef MATRIZ_H
#define MATRIZ_H

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
  Matriz(int _nlin, int _ncol);
};

#endif // MATRIZ_H
