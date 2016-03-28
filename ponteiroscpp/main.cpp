#include <iostream>

using namespace std;

class Teste{
  int x;
public:
  Teste(){
    cout << "construtor default\n";
  }
  Teste(int _x){
    x = _x;
    cout << "construtor args\n";
  }
  ~Teste(){
    cout << "destrutor default\n";
  }

  void print(){
    cout << "alo, teste: " << x << "!\n";
  }
};

int main(){
{
  /*
  Teste t1;
  Teste *pt;
  t1.print();
  pt = &t1;
  pt->print();
  (*pt).print();
*/
}

int *x;
// alocacao de tipos primitivos
x = new int;
*x = 4;
cout << *x << endl;
delete x;

// alocacao de arrays de elementos
x = new int[10];
x[3] = 32;
cout << x[3] << endl;
delete [] x;

// alocacao de objetos
Teste *t;
//t = new Teste;
t = new Teste(45);
t->print();
delete t;

t = new Teste[10];
t[3].print();
delete [] t;

return 0;
}



















