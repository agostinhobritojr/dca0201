#ifndef VETOR_H
#define VETOR_H

#include <iostream>

using namespace std;

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

  //sobrecarga do operador +
  Vetor operator+ (Vetor v2);

  // TODO
  // v3 = v1 - v2;
  Vetor operator- (Vetor v2);

  // v3 = v1*4;
  Vetor operator* (float a);

  // x = v1*v2;  prod. escalar
  float operator*(Vetor v2);

  // v3 = v1*4 + v2*5;
  // ja funciona

  // v3 = 5*v1;

  friend Vetor operator*(float a, Vetor v1);

  // cout << v1
  friend ostream& operator<<(ostream& os, Vetor v1);

}; // <=== ATENCAO!!!


#endif // VETOR_H

















