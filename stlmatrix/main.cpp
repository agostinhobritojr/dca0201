#include <iostream>
#include "matrix.h"
using namespace std;

int main()
{
  Matrix<float> m(3,4);
  Matrix<float> n(3,4);
  Matrix<float> o;
  m.randomize();
  n.randomize();
  o=m+n;
  cout << m << endl;
  cout << n << endl;
  cout << o << endl;
  o = m;
  cout << o << endl;
  return 0;
}

