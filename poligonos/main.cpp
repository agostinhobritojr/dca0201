#include <iostream>
#include "point2d.h"
#include "poligono.h"

using namespace std;

int main()
{
  Point2d p1;
  p1.setX(4); p1.setY(5);
  p1.print();
  Poligono p;
  p.print();
  p.addVertice(3,4);
  p.addVertice(5,-3);
  p.addVertice(1,1);
  cout << endl;
  p.print();
  p.translada(-1,2);
  p.print();
  cout << endl;
  return 0;
}

