#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float y;
public:
  float x;
  void setX(float mx);
  float getX(void);
  void setY(float my);
  float getY(void);
  float norma(void);
  float angulo(void);
  // incluir declaracao
  void print(void);
  Vetor soma(Vetor v2);
  Vetor subtrai(Vetor v2);
  // produto escalar
  float produto(Vetor v2);
};

#endif // VETOR_H
