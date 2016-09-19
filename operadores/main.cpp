#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1(1,2);
  Vetor v2(-4,9);
  Vetor v3;

//  v3 = v1.operator +(v2);
  v3 = v1 + v2;
  v3.print();

  // IMPLEMENTAR
  v3 = v1 - v2;
  v3.print();

  cout << v1*v2 << endl;

  v3 = v1*4;
  v3.print();

  v3 = 4*v1;

  v3 = 4*v1 - v2 + v1;

  v3.print();

  return 0;
}

