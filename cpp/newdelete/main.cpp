#include <iostream>

using namespace std;

int main(){
  int *x;
  int **y;
  // aloca memoria dinamicamente
  // usando o operador new[]
  x = new int[10];
  for(int i=0; i<10; i++){
    x[i] = i+1;
  }
  for(int i=0; i<10; i++){
    cout << x[i] << ",";
  }
  cout << endl;
  // libera a memoria usando o
  // operador delete[]

  delete [] x;

  // para tipos de ponteiros de
  // ordem superior
  // alocacao de matriz de 4 linhas
  // e cinco colunas
  y = new int*[4];
  for(int i=0; i<4; i++){
    y[i] = new int[5];
  }
  y[2][3] = 45;

  // libera os arrays com as linhas
  for(int i=0; i<4; i++){
    delete [] y[i];
  }
  // libera o array de ponteiros
  // auxiliares
  delete [] y;

  return 0;
}

