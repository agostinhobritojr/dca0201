#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstdlib> // srand()
#include <ctime> // time()

using namespace std;

int main(){
  vector<int> x(60);
  vector<int> resultado(6);
  vector<int>::iterator it;

  iota (x.begin(),x.end(),1);
  // muda a semente do gerador de numeros aleatorios
  srand(time(0));
  cout << "semente = " << time(0) << endl;
//  rand()%100

  for(int i=0; i<10; i++){
    random_shuffle(x.begin(), x.end());
    copy(x.begin(), x.begin()+6,resultado.begin());
    sort(resultado.begin(), resultado.end());
    for(int j=0; j<resultado.size(); j++){
      cout << resultado[j] << " ";
    }
    cout << endl;
  }

  sort(x.rbegin(), x.rend());
  for(int i=0; i<x.size(); i++){
    cout << x[i] << " ";
  }


  {
    /*
  // insere os elementos 3, 2 e -1 no vetor x
  x.push_back(3);
  x.push_back(2);
  x.push_back(-1);
  for(int i=0; i<x.size(); i++){
    cout << x[i] << " ";
  }
  cout << endl;
  for(it=x.begin(); it!=x.end(); it++){
    cout << *it << " ";
  }
  cout << endl;
  // so funciona em C++ 11
  // i varia sobre os valores do array x
  for(auto i : x){
    // bla bla bla
    cout << i << " ";
  }
  cout << endl;
  // remover o segundo elemento do array
  // implementar aqui
  for(int i=0; i<x.size(); i++){
    cout << &x[i] << " ";
  }
  cout << endl;
  x.erase(x.begin()+1);
  for(int i=0; i<x.size(); i++){
    cout << &x[i] << " ";
  }
  cout << endl;
  cout << *(x.begin()+2) << endl;
  */
  }


  return 0;
}

