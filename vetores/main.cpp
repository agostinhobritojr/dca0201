#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1, v2, v3;
  v1.setX(3);
  v1.setY(4);
  v2.setX(-1);
  v2.setY(9);
  v3 = v1.soma(v2);
  cout << "x= " << v3.getX() << endl;
  cout << "y= " << v3.getY() << endl;

  cout << sizeof(v3)
          ;
  cout << endl;
  cout << v1.modulo() << endl;
  cout << v1.angulo() << endl;

  return 0;
}






