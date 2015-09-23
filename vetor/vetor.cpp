#include "vetor.h"
#include <iostream>
#include <cmath>

using namespace std;

//Vetor::Vetor(){
//  cout << "construtor default\n";
//  x = y = 0.0;
//}

Vetor::Vetor(float mx, float my){
  x = mx; y = my;
}

Vetor::~Vetor(){
  cout << "morreu maria preah\n";
}

Vetor::Vetor(Vetor &m){
  cout << "construtor de copia\n";
  x = m.x; y = m.y;
}

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
  cout << "(" << x << "," << y << ")\n";
}

Vetor Vetor::soma(Vetor v2){
  // ativa outro construtor
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return(ret);
}

Vetor Vetor::operator+(Vetor v2){
  // ativa outro construtor
  Vetor ret;
  ret.x = x + v2.x;
  ret.y = y + v2.y;
  return(ret);
}

Vetor Vetor::operator-(Vetor v2){
  // ativa outro construtor
  Vetor ret;
  ret.x = x - v2.x;
  ret.y = y - v2.y;
  return(ret);
}

float Vetor::operator*(Vetor v2){
  // produto escalar
  return(x*v2.x + y*v2.y);
}

Vetor Vetor::operator* (float a){
  Vetor ret;
  ret.x = a*x; ret.y = a*y;
  return(ret);
}


void Vetor::operator++(){
  cout << "incremento prefixado";
  x++; y++;
}

void Vetor::operator++(int){
  cout << "incremento posfixado";
  x++; y++;
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

Vetor operator*(float a, Vetor v){
  Vetor ret;
 // ret.setX(a*v.getX());
 // ret.setY(a*v.getY());
  ret.x = a*v.x;
  ret.y = a*v.y;
}













