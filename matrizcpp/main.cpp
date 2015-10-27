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
  o = (m*n);//.print();
  o.print();
  return 0;
}

