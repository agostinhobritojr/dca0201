#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
//  scanf("%d", &x);
//  printf("x = %d\n", x);
  int x, i;
  int y[10];
  int *z;
  float *f;
 // srand(time(0));
  for(i=0; i<10; i++){
    y[i] = rand()%30;
  }

  for(i=0; i<10; i++){
    printf("%d, ", y[i]);
  }
  printf("\n");
  z = y;
  printf("endereco de y = %p\n", y);
  printf("endereco de z = %p\n", &z);
  printf("valor de z    = %ld\n", z);
  printf("conteudo de   = %d\n", *z);
  z = z+1;
  printf("valor de z    = %ld\n", z);
  printf("conteudo de   = %d\n", *z);
  z = z+3;
  printf("valor de z    = %ld\n", z);
  printf("conteudo de   = %d\n", *z);
  f = y;
  printf("valor de f    = %ld\n", f);
  printf("conteudo de   = %f\n", *f);
  z = y;
  z = z-100;
  printf("valor de z    = %ld\n", z);
  printf("conteudo de   = %d\n", *z);
  return 0;
}

