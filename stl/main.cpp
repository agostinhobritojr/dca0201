#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  vector<int> x(5,10);
  vector<int>::iterator it;
  for(int i=0; i<x.size(); i++){
    x[i] = i+1;
    cout << x[i] << ", ";
  }
  cout << endl;
  x.push_back(15);
  x.pop_back();
  // embaralha container - <algorithm>
  random_shuffle(x.begin(), x.end());
  sort(x.begin(), x.end());
  for(int i=0; i<x.size(); i++){
    cout << x[i] << ", ";
  }
  cout << endl;
  it = find(x.begin(), x.end(), 4);
  x.erase(it);
  x.insert(it, 4);
  // usando iteradores
  for(it = x.begin(); it!=x.end(); it++){
    cout << *it << ", ";
  }

  cout << endl;

  return 0;
}




