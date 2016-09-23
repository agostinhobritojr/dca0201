#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz A(3,3), B(3,3), C;
  cout << A << "\n";
//  ^^^^^^
//   cout  << "funcionou";

  for(int i=0; i<A.getlinhas(); i++){
    for(int j=0; j<A.getcolunas(); j++){
      A(i,j) = i+j;
    }
  }
  for(int i=0; i<B.getlinhas(); i++){
    for(int j=0; j<B.getcolunas(); j++){
      B(i,j) = i+j;
    }
  }
  cout << A << "\n";
  cout << B << "\n";
  C = A+B;
  C = C+B;
//  C = B = A;
  cout << C << "\n";
  return 0;
}

