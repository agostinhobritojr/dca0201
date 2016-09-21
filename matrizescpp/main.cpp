#include <iostream>
#include "matriz.h"

using namespace std;

int main(){
  Matriz A(3,3);
  cout << A << "\n";
//  ^^^^^^
//   cout  << "funcionou";

  for(int i=0; i<A.getlinhas(); i++){
    for(int j=0; j<A.getcolunas(); j++){
      A(i,j) = i+j;
    }
  }
  cout << A << "\n";

  return 0;
}

