#include <iostream>

using namespace std;

class Alo{
  int x;
public:
//  Alo(){
//    cout << "construtor default" << endl;
//  }
  Alo(int _x=0){
    x = _x;
    cout << "construtor argumentos" << endl;
  }
  ~Alo(){
    cout << "destrutor" << endl;
  }

  void setX(int _x){x=_x;}
  int getX(void){return x;}
};

int main(){
  Alo *alo;

  // aloca um unico elemento
  alo = new Alo(34);
//  alo->setX(45);
  cout << alo->getX() << endl;
  cout << (*alo).getX() << endl;
  cout << alo[0].getX() << endl;
  delete alo;

  // aloca bloco de elementos
  alo = new Alo[5];
  for(int i=0; i<5; i++){
    alo[i].setX(i+1);
    cout << alo[i].getX() << " ";
  }
  delete [] alo;


  {
    /*
    int *x;
    // use new para alocar um UNICO elemento
    x = new int;
    x[0] = 3;
    cout << x[0] << endl;
    // use delete para liberar memoria alocada
    // com new
    delete x;

    // use new[] para alocar um array de elementos
    x = new int[5];
    for(int i=0; i<5; i++){
      x[i] = i+1;
      cout << x[i] << " ";
    }
    cout << endl;
    cout << "endereco = " << x << endl;
    // use delete[] para liberar a memoria alocada
    // por new[]
    delete [] x;
    for(int i=0; i<5; i++){
      x[i] = i+1;
      cout << x[i] << " ";
    }
    cout << endl;
    */
  }

  return 0;
}

