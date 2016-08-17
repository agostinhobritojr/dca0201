#include <stdio.h>

void troca(int a, int b){
  int tmp;
//  printf("a=%d; b=%d\n", a, b);
  tmp=a; a=b; b=tmp;
 // printf("a=%d; b=%d\n", a, b);

}

int main(void){
  int x, y;
  int *px;

  x=3; y=4;

  px = &x; // px recebe o ENDERECO de x

  printf("&px = %p\n", &px);
  printf("px  = %p\n", px);
  printf("x   = %d\n", *px);

  px = 3;
  printf("x   = %d\n", *px);


//  printf("x=%d; y=%d\n", x, y);
  troca(x, y);
//  printf("x=%d; y=%d\n", x, y);
  return 0;
}

