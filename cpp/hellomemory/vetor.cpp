// definicao da classe
#include "vetor.h"
#include <cmath>
#include <iostream>

using namespace std;

// definicao do construtor default
//Vetor::Vetor(){
//  cout << "construtor\n";
//  x = y = 0;
//}

Vetor::Vetor(float mx, float my){
  cout << "construtor\n";
  x = mx; y = my;
}

Vetor::~Vetor(){
  cout << "destrutor\n";
}

Vetor::Vetor(Vetor &v){
cout << "construtor de copia\n";
  x = v.x;
  y = v.y;
}

// :: - operador de escopo
void Vetor::setX(float mx){
  x = mx;
  // mudou
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

float Vetor::modulo(void){
  return(sqrt(x*x+y*y));
}

Vetor Vetor::soma(Vetor my){
  Vetor ret;
  ret.x = x + my.x;
  ret.y = y + my.y;
  return(ret);
}

Vetor Vetor::soma(float a){
  Vetor ret;
  ret.x = x + a;
  ret.y = y + a;
  return(ret);
}

// realiza o produto interno entre
// dois vetores
float Vetor::produto(Vetor my){
  return(x*my.x+y*my.y);
}




