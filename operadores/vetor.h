#ifndef VETOR_H
#define VETOR_H

class Vetor{
  float x, y;
public:
  Vetor(float mx=0, float my=0);
  Vetor operator+ (Vetor v2);
  void print();
};

#endif // VETOR_H
