#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz m(3,4), n(3,4), o;
//  m(1,2) = -8;
  m.random();
  n.random();
  cout << "m = " << m << endl;
  cout << "n = " << n << endl;
  o=m+n;
  cout << "o = " << o << endl;
  cout << endl;
  return 0;
}

