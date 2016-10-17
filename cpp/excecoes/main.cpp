#include <iostream>
#include <cmath>

using namespace std;
// IEEE 754
// seeeeeeeeemmmmmmmmmmmmmmm
// s*1.mmmmmm*2^eeeeeeee

// float a, b;
// if(mysqrt(a, &b) == 1){
//    cout << b;
// }
// else{
//    cout << "erro!";
// }
int mysqrt(float x, float *ret){
  if(x >= 0){
    *ret = sqrt(x);
    return 1;
  }
  else{
    *ret = 0;
    return 0;
  }
}

float geometrica(float x, float y){
  long int ret;
  ret = 20;
  if(x*y >= 0){
    return(sqrt(x*y));
  }
  else{
//    throw "x*y eh menor que zero";
    throw ret;
  }
  cout << "terminou funcao geometrica\n";
}

float harmonica(float x, float y){
  if(x+y != 0){
    return( 2*(x*y)/(x+y) );
  }
  else{
    throw "x+y == 0";
  }
}

int main(){
  float x, y, z;
  cout << "digite x e y: ";
  cin >> x >> y;

  // se for utilizar funcoes que lançam excecoes,
  // use blocos TRY->CATCH
  //  cout << "GEOM: " << geometrica(x,y) << endl;

  try{
    z = geometrica(x,y);
    cout << "geometrica: " << z << endl;
    // mais codigo
  }
  catch(const char* e){
    cout << e << endl;
  }
  catch(long int e){
    cout << "pegou excecao: " << e << endl;
  }
  catch(double d){
    cout << "pegou excecao: " << d << endl;
  }
  catch(...){
    cout << "manda que eu me viro..." << endl;
  }

  try{
    z = harmonica(x,y);
    cout << "harmonica : " << z << endl;
  }
  catch(const char* e){
    cout << e << endl;
  }

  return 0;
}

