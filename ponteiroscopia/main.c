#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  int *x, *y;
  int i;
  x = malloc(5*sizeof(int));
  y = malloc(5*sizeof(int));
  for(int i=0; i<5; i++){
    x[i] = rand()%20;
  }
//  for(int i=0; i<5; i++){
//    y[i] = x[i];
//  }
  memcpy(y, x, 5*sizeof(int));
  // copia o vetor x para y
  //y = x;
  scanf("%d", &x[1]);
  for(int i=0; i<5; i++){ printf("%d - ", x[i]);}
  printf("\n");
  for(int i=0; i<5; i++){ printf("%d - ", y[i]);}
  printf("\n");
  y[0]= 44;
  for(int i=0; i<5; i++){ printf("%d - ", y[i]);}
  printf("\n");
  for(int i=0; i<5; i++){ printf("%d - ", x[i]);}
  free(x);
  free(y);
  return 0;
}

