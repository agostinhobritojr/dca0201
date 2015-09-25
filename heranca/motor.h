#ifndef MOTOR_H
#define MOTOR_H
#include "equipamento.h"
#include "pistao.h"

class Motor : public Equipamento{
  float potencia;
  float velocidade;
  Pistao p[4];
public:
  Motor();
  void setPotencia(float _potencia);
  void setVelocidade(float _velocidade);
  float getPotencia(void);
  float getVelocidade(void);
};

#endif // MOTOR_H
