#include <stdio.h>
#include <stdlib.h>

int main(void){
  int **x;
  int nl=3, nc=4; // nlinhas, ncolunas
  int i, j;
  // aloca vetor auxiliar
  x = (int**) malloc(nl*sizeof(int*));
  // aloca arrays de linhas
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc*sizeof(int));
  }
  // usa a matriz
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%20;
    }
  }
  // libera a memoria
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  free(x);
  return 0;
}

