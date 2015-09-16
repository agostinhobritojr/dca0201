// permite que as classes padronizadas
// de entrada e saída sejam usadas no programa
// em suma: permite usar os objetos cin e cout
#include <iostream>
#include <cmath>

// para usar diretamente o cin e cout
// bem como outras funcionalidades padronizadas
// em c++
using namespace std;

class Vetor{
private:
  float x, y;
public:
  void setX(float mx){
    x = mx;
  }
  float getX(void){
    return x;
  }
  void setY(float my){
    y = my;
  }
  float getY(void){
    return y;
  }
  // tam adimensional
  float norma(void){
    return(sqrt(x*x+y*y)); // include cmath
  }
  // angulo em graus
  float angulo(void){
    if( x == 0 && y > 0){
      return (90);
    }
    else if( x == 0 && y < 0){
      return (-90);
    }
    else{
      return(atan(y/x)*180/3.1415); // include cmath
    }
  }

};

int main()
{
  // v1 eh um objeto da classe Vetor
  Vetor v1;
  int valor;
  cout << "digite x: " ;
  cin >> valor;
//  v1.setX(3);
  v1.setX(valor);
  cout << v1.getX() << endl;
  return 0;
}




