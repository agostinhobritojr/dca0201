#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz m(3,3), n;
  m(1,2) = 4;
  cout << m << endl;
  // n = m;
  return 0;
}

