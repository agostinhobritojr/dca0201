#include <iostream>
#include <cmath>
using namespace std;

class Vetor{
  // somente funcoes da classe podem acessar
private:
  float x, y;
  // usuarios externos da classe podem acessar
public:
  // funcoes, funcoes-membro, metodos

  // guarda na variavel x da classe
  // o valor fornecido atraves da variavel
  // mx
  void setX(float mx){
    x = mx;
  }
  // recupera o valor de x e retorna para
  // seu cliente
  float getX(void){
    return x;
  }

  // implementar
  // setY
  // getY
  // angulo
  // modulo
  void setY(float my){
    y = my;
  }

  float getY(void){
    return y;
  }

  float modulo(void){
    return(sqrt(x*x+y*y));
  }

}; // <--- maligno


int main(void){
  Vetor v1; // v1 eh um objeto da classe Vetor
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

