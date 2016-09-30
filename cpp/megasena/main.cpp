#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <cstdlib>

using namespace std;

int main(){
  // criar um array com 60 elementos iguais a zero

  vector< vector<int> > x(5, vector<int>(4,0)), y;


  x[3][2]=0;
  y = x;

  vector<int> v(60,0);
  vector<int>::iterator it;
  ostream_iterator<int> output(cout,", ");

  srand(time(0));
  iota(v.begin(), v.end(), 1);

  /*
  for(it=v.begin(); it!=v.end(); it++){
    cout << *it << ",";
  }
  cout << endl;

  copy(v.begin(), v.end(), output);
  cout << endl;
  cout << endl;
  cout << endl;
*/

  vector<int> aposta(6);

  vector< vector<int> > apostas;

  for(int i=0; i<20; i++){
    random_shuffle(v.begin(), v.end());
    copy(v.begin(), v.begin()+6, aposta.begin());
    apostas.push_back(aposta);
  }

  for(int i=0; i<apostas.size(); i++){
    for(int j=0; j<apostas[i].size(); j++){
      cout << apostas[i][j] << ", ";
    }
    cout << endl;
  }
  return 0;
}

