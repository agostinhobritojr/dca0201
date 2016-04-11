#include <iostream>
#include <cmath>

using namespace std;

float harm(float x, float y){
  if(x == -y){
    throw "x igual a -y"; // lanca a excecao
//    throw 20.0;
  }
  return((x*y)/(x+y));
}

float geom(float x, float y){
  return(sqrt(x*y));
}

int main(){
  float x, y, z;
  cout << "digite x e y: ";
  cin >> x >> y;
  z = harm(x,y);
  cout << "harm = " << z << endl;
  try{
    z = harm(x,y);
    cout << "harm = " << z << endl;
  }
  catch(const char* e){
    cout << "erro = " << e << endl;
  }
  catch(float e){
    cout << "erro = " << e << endl;
  }
  catch(...){
    cout << "qq coisa diferente" << endl;
  }

  cout << "geom = " << geom(x,y) << endl;
  return 0;
}












