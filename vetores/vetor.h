#ifndef VETOR_H
#define VETOR_H

class Vetor{
private: // visiveis somente pela classe
  float x, y;
public: // visiveis por todos
  // construtor default
  // SEM ARGUMENTOS
 // Vetor();

  // construtor com argumentos
  Vetor(float mx=0, float my=0);
  // em processos de alocacao dinamica
  // o construtor com argumentos pode
  // ser ativado, desde que os args
  // possuam valores iniciais atribuidos

  // construtor de copia
  Vetor(Vetor &v);

  // destrutor
  ~Vetor();

  void setX(float mx);
  float getX(void);
  void setY(float _y);
  float getY(void);
  void print(void);
  float modulo(void);
  float angulo(void);
  Vetor soma(Vetor v2);
  Vetor soma(float a);

}; // <=== ATENCAO!!!

#endif // VETOR_H
