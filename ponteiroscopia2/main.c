#include <stdio.h>
#include <stdlib.h>

int* realoca(int* x,int tam_ant, int tam_novo){
  int *y;
  int i;
  int min;
  y = (int*) malloc(tam_novo*sizeof(int));
  for(i=0; i<tam_novo; i++){
    y[i] = 0;
  }

  if(tam_ant < tam_novo)
    min=tam_ant;
  else
    min=tam_novo;

  for(i=0; i<min; i++){
    y[i] = x[i];
  }
  free(x);
  return(y);
}

int main(void)
{
  int *x, *y;
  int i;
  x = (int*) malloc(5*sizeof(int));

  for(i=0; i<5; i++){
    x[i]=rand()%20;
  }

  printf("%p: ", x);
  for(i=0; i<5; i++){ printf("%d- ",x[i]); }
  // endereco
  // tamanho anterior
  // tamanho novo
  x = realoca(x,5,3);
  printf("\n");
  printf("%p: ", x);
  for(i=0; i<3; i++){ printf("%d- ",x[i]); }
  printf("\n");
  return 0;
}

