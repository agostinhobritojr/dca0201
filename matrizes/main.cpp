#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz m(3,3), n(3,3), w, y;
  m.randomize();
  n.randomize();
  m(1,2) = 4;
  cout << m << endl;
  cout << n << endl;
  y = w = n;
  cout << y << endl;
  w = m + n;
  cout << "soma\n";
  cout << w << endl;
  return 0;
}

