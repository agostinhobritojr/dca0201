#include <iostream>
#include "vetor.h"

template <typename T, class U, int n>
T media(T x, U y){
  U ret;
  U vetor[n];
  std::cout << "tam = " << sizeof(vetor) << std::endl;
  ret = (x+y)/2;
  return ret;
}

using namespace std;

int main(){
  int z;
  Vetor<int> v1;
  Vetor<float> v2,v3,v4;

  v1.setX(33);
  v4=v2+v3;
//  v4=v1+v2;
  cout << v1.getX() << endl;


  {
    cout << media<int,int,3>(3,4) << endl;
    //  cout << media(3,4) << endl;
    cout << media<float,float,5>(3,4) << endl;
    return 0;
  }


}

