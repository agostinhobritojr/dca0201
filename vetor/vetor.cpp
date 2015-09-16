#include "vetor.h"
#include <iostream>
#include <cmath>

using namespace std;

void Vetor::setX(float mx){
  x = mx;
}
float Vetor::getX(void){
  return x;
}
void Vetor::setY(float my){
  y = my;
}
float Vetor::getY(void){
  return y;
}
// tam adimensional
float Vetor::norma(void){
  return(sqrt(x*x+y*y)); // include cmath
}
// angulo em graus
float Vetor::angulo(void){
  if( x == 0 && y > 0){
    return (90);
  }
  else if( x == 0 && y < 0){
    return (-90);
  }
  else{
    return(atan(y/x)*180/3.1415); // include cmath
  }
}

void Vetor::print(){
  cout << "(" << x << "," << y << ")";
}

Vetor Vetor::soma(Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return(ret);
}

Vetor Vetor::subtrai(Vetor v2){
  Vetor ret;
  ret.x = x - v2.x;
  ret.y = y - v2.y;
  return(ret);
}

float Vetor::produto(Vetor v2){
  return(x*v2.x+y*v2.y);
}














