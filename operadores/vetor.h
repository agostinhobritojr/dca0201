#ifndef VETOR_H
#define VETOR_H

class Vetor{
  float x, y;
public:
  Vetor(float mx=0, float my=0);
  Vetor operator+ (Vetor v2);
  Vetor operator- (Vetor v2);
  float operator* (Vetor v2);
  Vetor operator* (float a);
  void print();
  // funcao amiga a classe Vetor
  // NAO PERTENCE A CLASSE
  // NAO EH UM METODO DA CLASSE VETOR
  friend Vetor operator*(float a, Vetor v2);
};

#endif // VETOR_H
