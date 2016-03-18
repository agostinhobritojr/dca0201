#include <iostream>
#include <cmath>

using namespace std;

class Vetor{
private: // visiveis somente pela classe
  float x, y;
public: // visiveis por todos
  void setX(float mx){
    x = mx;
  }
  float getX(void){
    return (x);
  }
  void setY(float _y){
    y = _y;
  }
  float getY(void){
    return (y);
  }
  void print(void){
    cout << "(" << x << ", " << y << ")";
  }
  float modulo(void){
    return(sqrt(x*x+y*y));
  }
  float angulo(void){
    return(atan(y/x));
  }
}; // <=== ATENCAO!!!


int main(){
  Vetor v1;
  v1.print();
  cout << endl;
  v1.setX(4);
  v1.setY(3);
  v1.print();
  cout << endl;
  cout << v1.modulo() << endl;
  cout << v1.angulo() << endl;

  return 0;
}






