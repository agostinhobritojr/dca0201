#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz<float> a(3,3), b(3,3), c;
  a.randomize();
  b.randomize();
  cout << a;
  cout << b;
  c = a+b;
  cout << c;
  return 0;
}

