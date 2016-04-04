#include <iostream>
#include "alo.h"
using namespace std;

template<class Tipo>
Tipo media(Tipo x, Tipo y){
  return((x+y)/2);
}

template<typename T, typename U>
U alo(T x){
  return x/2;
}

template<class T, int n=10>
void print(){
  T vec[n];
  int valor;
  valor = n;
  for(int i=0; i<valor; i++){
    vec[i] = i+1;
    cout << vec[i] << " ";
  }
}


int main()
{

  {
  cout << media<int>(3,4) << endl;
  cout << media<float>(3,4) << endl;
  cout << alo<float, int> (3.4) << endl;
  cout << alo<int, float> (3.4) << endl;
  print<int>();
  cout << endl;
  print<int>();

  print<int,3>();
  cout << endl;
  }

  Alo<int> alo;
  Alo<float> alof;
  alo.print();
  alof.print();
  return 0;
}

