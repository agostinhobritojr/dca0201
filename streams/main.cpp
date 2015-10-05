#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Alo{
  int x;
public:
  void setX(int _x){x = _x;}
  int getX(void){return x;}
  friend ostream& operator<<(ostream& os, Alo &alo);
  friend istream& operator>>(istream& is, Alo &alo);
};

ostream& operator<<(ostream& os, Alo &alo){
  os << alo.x;
  return os;
}

istream& operator>>(istream& is, Alo &alo){
  is >> alo.x;
  return is;
}


int main(){
  ofstream fout;
  ifstream fin;
  int c;
  string s;

  Alo x;
  cout << "digite o valor de x: ";
  cin >> x;
  cout << endl << x << endl;

  // abre o fluxo de saida

  fin.open("/tmp/entrada.txt");
  fout.open("/tmp/saida.txt");

  // copia caractere a caractere
  // o conteudo de um arquivo para outro
  while(fin.good()){
    // le um caractere
    c = fin.get();
    // testa se a leitura foi correta
    if(fin.good())
      // escreve o caractere
      fout.put(c);
  }

  // limpa o estado do fluxo
  // era "bad" quando a leitura
  // incorreta foi realizada
  fin.clear();
  // posiciona fin no
  // inicio do arquivo entrada.txt
  fin.seekg(0);

  getline(fin,s);
  cout << s << endl;


  fin.seekg(0);
  char nome[100];
  fin.getline(nome,100);
  cout << nome << endl;

  // fecha os arquivos
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

