// uso da classe
#include <iostream>

#include "vetor.h"
using namespace std;

int main(void){
  // v1 eh um objeto da classe Vetor
  Vetor v1, v2, v3;
  Vetor v5(v1);
  Vetor v6 = v2;

  Vetor v4(5,6);
  cout << v4.getX() << "," << v4.getY()
       << "\n";

  v1.setX(1); v1.setY(2);
  v2.setX(3); v2.setY(4);
  v3 = v1.soma(v2);
  cout << "v3 = (" << v3.getX() <<
          ", " << v3.getY() << ")\n";

  // aloha
  float ret;
  // envia a mensagem setX com o parametro 3
  v1.setX(3);
  // envia a mensagem getX, esperando o retorno
  // do valor armazenado
  ret = v1.getX();
  cout << ret << "\n";
  v1.setY(4);
  cout << "modulo= " << v1.modulo() << "\n";
  return 0;
}

