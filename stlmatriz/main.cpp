#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz<float> a(3,3), b(3,3), c;
  a.randomize();
  cout << a;
  return 0;
}

