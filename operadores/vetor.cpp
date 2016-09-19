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

void Vetor::print(){
  cout << "(" << x << ", " << y << ")";
}
