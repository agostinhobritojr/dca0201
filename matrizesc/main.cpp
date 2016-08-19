#include <stdio.h>
#include <stdlib.h>

int main(){
  int **x;
  int nl, nc, i, j;
  nl = 3;
  nc = 4;

  // aloca memoria para armazenar o array auxiliar
  // de ponteiros
  x = (int**) malloc(nl*sizeof(int*));

  // aloca memoria para cada uma das linhas da
  // matriz
  for(i=0; i<nl; i++){
    x[i] = (int*) malloc(nc*sizeof(int));
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      x[i][j] = rand()%11-5;
    }
  }
  for(i=0; i<nl; i++){
    for(j=0; j<nc; j++){
      printf("%3d ",x[i][j]);
    }
    printf("\n");
  }
  // libera cada uma das linhas da matriz
  for(i=0; i<nl; i++){
    free(x[i]);
  }
  // libera vetor de ponteiros auxiliar
  free(x);

  return 0;
}

