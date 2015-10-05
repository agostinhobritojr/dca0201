#include <iostream>
#include <fstream>

using namespace std;

int main(){
  ofstream fout;
  ifstream fin;
  int c;
  // abre o fluxo de saida

  fin.open("/tmp/entrada.txt");
  fout.open("/tmp/saida.txt");

  while(fin.good()){
    c = fin.get();
    fout.put(c);
  }

  fin.close();
  fout.close();


  {
    /*
  fout.open("eu.txt");
  if(!fout.is_open()){
    return;
  }
  // escreve no fluxo
  fout << "Agostinho" << endl;

  // fecha o fluxo de saida
  fout.close();
  */
  }


  return 0;
}

