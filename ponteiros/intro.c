#include <stdio.h>

int main(void){
  int x;
  int *px;
  x = 5;
  printf("x  = %d\n",x);
  px = &x;
  printf("px = %p\n",px);  
  *px = 4;
  printf("x  = %d\n",x);
  px = 0;
  *px = 4;
  printf("x  = %d\n",x);
}
