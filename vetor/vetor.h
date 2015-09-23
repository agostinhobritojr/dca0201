#ifndef VETOR_H
#define VETOR_H

class Vetor{
private:
  float y;
  float x;
public:
// Vetor();
  Vetor(float mx=0, float my=0);
  Vetor(Vetor &m);
  ~Vetor(); // so pode haver 1
  void setX(float mx);
  float getX(void);

  void setY(float my);
  float getY(void);
  float norma(void);
  float angulo(void);
  // incluir declaracao
  void print(void);
  Vetor soma(Vetor v2);
  Vetor soma(float b);

  // sobrecarga de operadores
  Vetor operator+ (Vetor v2);
  Vetor operator- (Vetor v2);
  float operator* (Vetor v2);
  Vetor operator* (float a);
  void operator++ ();
  void operator++ (int);

  Vetor subtrai(Vetor v2);
  // produto escalar
  float produto(Vetor v2);
  friend Vetor operator*(float a, Vetor v);
};

// sobrecarga de funcoes regulares
// v3 = a * v2;
Vetor operator*(float a, Vetor v);

#endif // VETOR_H
