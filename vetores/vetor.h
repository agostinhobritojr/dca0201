#ifndef VETOR_H
#define VETOR_H

class Vetor{
private: // visiveis somente pela classe
  float x, y;
public: // visiveis por todos
  void setX(float mx);
  float getX(void);
  void setY(float _y);
  float getY(void);
  void print(void);
  float modulo(void);
  float angulo(void);
  Vetor soma(Vetor v2);
}; // <=== ATENCAO!!!

#endif // VETOR_H
