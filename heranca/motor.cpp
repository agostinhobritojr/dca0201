#include "motor.h"
#include <iostream>

using namespace std;

Motor::Motor(){
  cout << "const motor\n";
}

Motor::~Motor(){
  cout << "dest motor\n";
}

void Motor::setPotencia(float _potencia){
  potencia=_potencia;
}

void Motor::setVelocidade(float _velocidade){
  velocidade=_velocidade;
}

float Motor::getPotencia(void){
  return potencia;
}

float Motor::getVelocidade(void){
  return velocidade;
}

void Motor::setPreco(float _preco){
  Equipamento::setPreco(40*potencia);
}





