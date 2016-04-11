#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include <vector>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[])
{
  ofstream fout;
  ifstream fin;
  string str;
  // conecta o fluxo com arquivo fisico
  fout.open("/home/ambj/saida.txt");
  if(!fout.is_open()){
    cout << "nao abriu saida.txt\n";
    exit(0);
  }
  fout << "Agostinho Brito";
  fout.close();

  fin.open("/home/ambj/saida.txt");
  if(!fin.is_open()){
    cout << "nao abriu saida.txt\n";
    exit(0);
  }

//  fin >> str;
//  getline(fin,str);
//  char nome[13];
//  fin.getline(nome,13);
//  cout << nome;
  fin.close();

  fin.open("/home/ambj/origem.txt");
  fout.open("/home/ambj/destino.txt");

  while(fin.good()){
    int c;
    c = fin.get();
    if(fin.good()){
      fout.put(c);
    }
  }
  fin.close();
  fout.close();

  fin.open("/home/ambj/matriz.txt");
  int nl, nc;
  fin >> nl >> nc;
  vector< vector<float> > v(nl, vector<float>(nc, 0));
  for(int i=0; i<nl; i++){
    for(int j=0; j<nc; j++){
      fin >> v[i][j];
    }
  }
  cout << "[";
  for(int i=0; i<nl; i++){
    cout << "[";
    for(int j=0; j<nc; j++){
      cout << setw(4) << fixed << setprecision(2);
      // #include <iomanip>
      cout << v[i][j] << " ";
    }
    cout << "]" << endl;
  }
  cout << "]" << endl;
  return 0;
}















