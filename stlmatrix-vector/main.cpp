#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // vector<tipo> x(quant, valor_inicial);
  vector< vector<int> > m(4, vector<int>(5,3));
  for(int i=0; i<m.size(); i++){
    for(int j=0; j<m[0].size(); j++){
      cout << m[i][j] << ", ";
    }
    cout << endl;
  }
  return 0;
}

