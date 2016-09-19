#include "vetor.h"
#include <iostream>

using namespace std;

Vetor::Vetor(float mx, float my){
  x = mx;
  y = my;
}

Vetor Vetor::operator+(Vetor v2){
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return ret;
}

Vetor Vetor::operator-(Vetor v2){
  Vetor ret;
  ret.x = x - v2.x;
  ret.y = y - v2.y;
  return ret;
}

float Vetor::operator*(Vetor v2){
  return (x*v2.x + y*v2.y);
}

Vetor Vetor::operator*(float a){
  Vetor ret;
  ret.x = a*x;
  ret.y = a*y;
  return ret;
}

Vetor operator*(float a, Vetor v2){
  Vetor ret;
  ret.x = a*v2.x;
  ret.y = a*v2.y;
  return ret;
}


void Vetor::print(){
  cout << "(" << x << ", " << y << ")\n";
}
