#include <iostream>

using namespace std;

template <class T, typename U>
U media(T a, T b){
  return( (a+b)/2);
}

template <class T, int n=10>
void vetor(){
  T v[n];
  cout << "n = " << n << endl;
}

int main(){
  int x, y, z;
  x = 4; y = 6;

  vetor<int, 20>();
  vetor<int>();


  cout << "media = " << media<int, int>(4,5) << endl;
  cout << "media = " << media<float, float>(4,5) << endl;
  return 0;
}

