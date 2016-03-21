#include "vetor.h"
#include <iostream>
#include <cmath>

using namespace std;

void Vetor::setX(float mx){
  x =  mx;
}
float Vetor::getX(void){
  return (x);
}
void Vetor::setY(float _y){
  y = _y;
}
float Vetor::getY(void){
  return (y);
}
void Vetor::print(void){
  cout << "(" << x << ", " << y << ")";
}
float Vetor::modulo(void){
  return(sqrt(x*x+y*y));
}
float Vetor::angulo(void){
  return(atan(y/x));
}

Vetor Vetor::soma(Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return (ret);
}







