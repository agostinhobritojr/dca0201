// declaracao da classe
#ifndef VETOR_H
#define VETOR_H
class Vetor{ 
private:
  float x, y;

public:
  Vetor(float mx=0, float my=0);
  ~Vetor();
  Vetor(Vetor &v);

  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  float modulo(void);
  Vetor soma(Vetor my);
  Vetor soma(float a);
  float produto(Vetor my);
}; // <--- maligno
#endif // VETOR_H

