#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
  vector<int> v;
  vector<int>::iterator comeco, posUltimo;
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);
  v.push_back(-2);
  v.push_back(0);

  comeco = v.begin();
  posUltimo = v.end();

  for(int i=0; i<v.size(); i++){
    cout << v[i] << ", ";
  }
  cout << endl;

  sort(comeco, posUltimo);

  // procurar se o inteiro '3' está no vetor
  // se estiver, remove-lo

  vector<int>::iterator it;
  // encontra um iterador para o elemento
  // cujo valor eh 3.
  it = find(v.begin(), v.end(), 3);
  cout << "achei o elemento: " << *it << endl;
  v.erase(it);
  v.insert(v.begin()+3,3);
  for(comeco = v.begin(); comeco!=v.end(); comeco++){
    cout << *comeco << ", ";
  }
  cout << endl;

  return 0;
}

