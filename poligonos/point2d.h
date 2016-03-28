#ifndef POINT2D_H
#define POINT2D_H

class Point2d{
  float x, y;
public:
  Point2d();
  void setX(float _x);
  void setY(float _y);
  float getX();
  float getY();
  void print();
  void translada(float a, float b);
};

#endif // POINT2D_H
