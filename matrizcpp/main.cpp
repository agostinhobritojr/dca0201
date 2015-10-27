#include <iostream>
#include "matriz.h"

using namespace std;

class Vector{
public:
  float x,y;
  Vector(int _x=0, int _y=0){
 //   x = _x;
 //   y = _y;
    x=rand()%10;
    y=rand()%10;
  }
  float operator*(Vector v){
    return (x*v.x+y*v.y);
  }
  Vector operator+(Vector v){
    Vector ret;
    ret.x = x+v.x;
    ret.y = y+v.y;
    return (ret);
  }
  friend ostream& operator<<(ostream& os, Vector v);
};

ostream& operator<<(ostream& os, Vector v){
  os << "(" << v.x << "," << v.y << ")";
}

ostream& operator<<(ostream& os, Matriz<float, float>& m){
  os << "[" ;
  for(int i=0; i<m.nlin; i++){
    os << "[";
    for(int j=0; j<m.ncol; j++){
      os << m.x[i][j];
      if(j < m.ncol-1 ) {
        os << ",";
      }
    }
    os << "]";
    if(i < m.nlin-1 ) {
      os << endl;
    }
  }
  os << "]";
  return os;
}

ostream& operator<<(ostream& os, Matriz<Vector, float>& m){
  os << "[" ;
  for(int i=0; i<m.nlin; i++){
    os << "[";
    for(int j=0; j<m.ncol; j++){
      os << m.x[i][j];
      if(j < m.ncol-1 ) {
        os << ",";
      }
    }
    os << "]";
    if(i < m.nlin-1 ) {
      os << endl;
    }
  }
  os << "]";
  return os;
}

int main(){
//  Matriz<float,float> m(3,4), n(4,3), o;
//  m(1,2) = -8;
//  m.random();
//  n.random();
//  o=m*n;
// cout << "o = " << o << endl;
//  o.print();
//  cout << endl;
  Matriz<Vector, float> m(2,2), n(2,2);
  Matriz<float,float> o;
  o = m*n;
  cout << m << endl << "*" << endl;
  cout << n << endl << "=" << endl;
  cout << o << endl;
  return 0;
}

