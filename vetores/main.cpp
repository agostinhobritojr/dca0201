#include <iostream>
#include "vetor.h"

using namespace std;

int main(){
  Vetor v1(9,8), v2(4,5), v3; //, v3=v1;

  cout << endl;
  cout << endl;
  cout << v1 << " - deu certo \n";
  cout << endl;
  cout << endl;



//  v3=v1.operator+(v2);
  v3 = v1 + v2;
  v3.print(); cout << endl;
  v3 = v1 - v2;
  v3.print(); cout << endl;
  v3 = v1 * 10;
  v3.print(); cout << endl;
  cout << v1*v2 << endl;
  v3 = v1*4 + v1;
  v3 = 5*v1;
  v3.print(); cout << endl;
  v3 = v1*v1*v2;
  v3.print(); cout << endl;



  {
    /*
  v3 = v1;
  cout << "x= " << v1.getX() ;
  cout << " y= " << v1.getY() << endl;
  cout << "x= " << v2.getX() ;
  cout << " y= " << v2.getY() << endl;
  cout << "x= " << v3.getX() ;
  cout << " y= " << v3.getY() << endl;
  v1.setX(3);
  v1.setY(4);
  v2.setX(-1);
  v2.setY(9);
  v3 = v1.soma(v2);
  v3 = v1.soma(3.4);
  cout << "x= " << v3.getX() << endl;
  cout << "y= " << v3.getY() << endl;

  cout << sizeof(v3)
          ;
  cout << endl;
  cout << v1.modulo() << endl;
  cout << v1.angulo() << endl;
  */
  }



  return 0;
}






