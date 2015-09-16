// permite que as classes padronizadas
// de entrada e saída sejam usadas no programa
// em suma: permite usar os objetos cin e cout
// para usar diretamente o cin e cout
// bem como outras funcionalidades padronizadas
// em c++
#include <iostream>
#include "vetor.h"

using namespace std;


int main()
{
  // v1 eh um objeto da classe Vetor
  Vetor v1, v2, v3;
  v1.setX(3); v1.setY(4);
  v2.setX(5); v2.setY(-6);
  v3 = v1.soma(v2);
  v3.print();
  v1.x = 3;
//  int valor;
//  cout << "digite x: " ;
//  cin >> valor;
//  v1.setX(3);
//  v1.setX(valor);
//  cout << v1.getX() << endl;
//  v1.print();
  return 0;
}




