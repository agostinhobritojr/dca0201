#include "point2d.h"
#include <iostream>

using namespace std;

Point2d::Point2d()
{
  x = y = 0;
}

void Point2d::setX(float _x)
{
 x = _x;
}

void Point2d::setY(float _y)
{
  y = _y;
}

float Point2d::getX()
{
  return x;
}

float Point2d::getY()
{
  return y;
}

void Point2d::print(){
  cout << "(" << x <<
          "," << y <<
          ")";
}

void Point2d::translada(float a, float b){
  x+=a; y+=b;
}



