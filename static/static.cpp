#include "static.h"
#include <iostream>

Static::Static()
{
  static int x=0;
  id = x;
  x++;
}

void Static::printId()
{
  std::cout << "id = " << id << std::endl;
}
