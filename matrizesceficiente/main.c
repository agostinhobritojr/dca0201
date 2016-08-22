#include <stdio.h>
#include <stdlib.h>

int main(void){
  int **x;
  int nl, nc, i, j;
  nl = 3;
  nc = 4;

  // aloca array auxiliar
  x = (int**) malloc(nl*sizeof(int*));

  // aloca array com TODA a matriz
  x[0] = (int*) malloc(nl*nc*sizeof(int));

  // ajusta os enderecos das linhas
  // no array de ponteiros auxiliar
  for(int i=1; i<nl; i++){
    x[i] = x[i-1] + nc;
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
  // libera espaco para a matriz
  free(x[0]);
  free(x);
  return 0;
}








