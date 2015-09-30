#include <iostream>
#include <vector>

using namespace std;

int main(){
  vector< vector<int> > matriz(5,vector<int>(6,0));

  vector< vector<int> > matriz1;

  vector<int> v(10);

  matriz1.push_back(v);

  for(int i=0; i<matriz.size(); i++){
    for(int j=0; j<matriz[i].size(); j++){
      cout << matriz[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}

