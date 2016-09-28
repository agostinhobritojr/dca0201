// uso da classe
#include <iostream>
#include "vetor.h"
using namespace std;

int main(void){
//  Vetor v[10];
//  v[1].setX(3);
//  v[1].setY(4);

  cout << "tamanho do vetor: " << sizeof(Vetor) << endl;


  Vetor *a;
  Vetor b;

  b.setX(3);
  b.setY(4);


  a = new Vetor;
  a->setX(3);
  a->setY(4);
  // *a contem o proprio objeto
  (*a).setX(3);
  (*a).setY(4);

  delete a;

  cout << "\nalo,,,\n\n";
  a = new Vetor[5];
  a[0].setX(3);
  a[0].setY(4);

  (a+1)->setX(3);
  (a+1)->setY(4);

  (*(a+1)).setX(3);


  delete [] a;
  return 0;
}

