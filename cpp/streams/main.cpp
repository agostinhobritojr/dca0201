#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <sstream>

using namespace std;

int main(){
  ofstream fout;
  ifstream fin;
  string s;
  stringstream ss;


  int x=4;
  int y;

  fin.open("/home/ambj/entrada.txt");
  // verifica se o fluxo foi aberto
  if(!fin.is_open()){
    exit(0);
  }

  while(fin.good()){
   // fin >> s;
    getline(fin, s);
    if(fin.good()){
      // lanca o string s no fluxo ss
      ss.clear();
      ss.str(s);
      while(ss.good()){
        ss >> s >> x >> y;
        cout << s << ": " << x << "," << y << endl;
      }
      cout << endl;
    }
  }

  fin.close();

  /*
  // abre o fluxo de entrada
  fin.open("/home/ambj/entrada.txt");
  // verifica se o fluxo foi aberto
  if(fin.is_open()){
    // le um inteiro do arquivo
    fin >> x;
    if(fin.good()){
      cout << "leu corretamente" << endl;
    }
    else{
      cout << "nao leu:" << x << endl;
    }
  }
  else{
    cout << "nao abriu" << endl;
    exit(0);
  }
  fin.close();

  // abre o fluxo de saida
  fout.open("/home/ambj/saida.txt");
  // testa se o fluxo foi aberto
  if(fout.is_open()){
    // escreve no fluxo
    fout << "valor = " << x << endl;
  }
  // fecha o fluxo de saida
  fout.close();
  */
  return 0;
}

