#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
  string s, s1, s2;
  string teste("jose");
  int larg, alt;

  stringstream ss("line 10 10 12 13");

  ss >> s;  cout << s << endl;

  if(s.compare(string("line")) == 0){
    int x0, y0, x1, y1;
    ss >> x0; cout << x0 << endl;
    ss >> y0; cout << y0 << endl;
    ss >> x1; cout << x1 << endl;
    ss >> y1; cout << y1 << endl;
  }


  cout << endl;

  s = "jose";

  if(s.compare(teste)==0){
    cout << "sao iguais" << endl;
  }

  cout << s << endl;
  s1 = "maria";
  s2 = "jose";
  s = s1 + " " + s2;
  cout << s << endl;
  return 0;
}

