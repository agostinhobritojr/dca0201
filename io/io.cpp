#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main(void){
  ofstream fout;
  ifstream alomaria;
  fout.open("saidaout.txt");
  if(!fout.is_open()){
	cout << "nao abriu fout\n";
	exit(1);
  }
  fout << "Agostinho Brito\n";
  alomaria.open("entradah.txt");
  int x;
  if(!alomaria.is_open()){
	cout << "nao abriu entradah.txt";
	exit(1);
  }
  alomaria >> x;
  cout << "x = " << x;
}
