#include <stdio.h>

void troca(int* a, int *b){
  int tmp;
  tmp=*a;
  a =*b;
  *b =tmp;
}

void ordena(int *a, int *b, int *c);

int main(void){
  int x, y, z;

  x=4; y=3; z=2;

  ordena(&x, &y, &z);
  printf("x=%d; y=%d; z=%d\n",x,y,z);

  printf("x=%d; y=%d\n",x,y);
  troca(&x, &y);
  printf("x=%d; y=%d\n",x,y);
  return 0;
}

void ordena(int *a, int *b, int *c){
  int tmp;
  // verifica se o conteudo de a
  // eh maior que o conteudo de b
  if(*a > *b){
    tmp = *a;
    *a = *b;
    *b = tmp;
  }
  // compara o 1o. com o 3o.
  if(*a > *c){
    tmp = *a;
    *a = *c;
    *c = tmp;
  }
  // compara o 2o. com o 3o.
  if(*b > *c){
    tmp = *b;
    *b = *c;
    *c = tmp;
  }
}














