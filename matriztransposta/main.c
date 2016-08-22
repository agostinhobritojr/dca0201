#include <stdio.h>
#include <stdlib.h>

int main(void){
  // x : matriz de entrada
  // y : matriz transposta
  // tarefas:
  // *1 : gerar a matriz x
  // *2 : atribuir valores aos seus elementos
  // *3 : mostrar a matriz x na tela
  // *4 : gerar a matriz y
  // *5 : copiar x->y
  // *6 : mostrar a matriz y na tela
  // 7 : liberar a memoria alocada para as matrizes
  int **x, **y;
  int nlx, ncx, nly, ncy;
  int i, j;

  ncy = nlx = 3;
  nly = ncx = 4;
  // aloca array de ponteiros auxiliares
  x = (int**) malloc(nlx*sizeof(int*));

  // aloca array com a matriz
  x[0] = (int*) malloc(nlx*ncx*sizeof(int));

  // ajusta os enderecos das linhas no array
  // de ponteiros auxiliares
  for(i=1; i<nlx; i++){
    x[i] = x[i-1] + ncx;
  }

  for(i=0; i<nlx; i++){
    for(j=0; j<ncx; j++){
      x[i][j] = rand()%11;
      //*(x+i*ncx+j) = rand()%11;
    }
  }

  for(i=0; i<nlx; i++){
    for(j=0; j<ncx; j++){
      printf("%2d ", x[i][j]);
    }
    printf("\n");
  }

  // aloca array de ponteiros auxiliares
  y = (int**) malloc(nly*sizeof(int*));

  // aloca array com a matriz
  y[0] = (int*) malloc(nly*ncy*sizeof(int));

  // ajusta os enderecos das linhas no array
  // de ponteiros auxiliares
  for(i=1; i<nly; i++){
    y[i] = y[i-1] + ncy;
  }

  for(i=0; i<nly; i++){
    for(j=0; j<ncy; j++){
      y[i][j] = x[j][i];
    }
  }

  for(i=0; i<nly; i++){
    for(j=0; j<ncy; j++){
      printf("%2d ", y[i][j]);
    }
    printf("\n");
  }

  free(*x);
  free(y[0]);
  free(x);
  free(y);

  return 0;
}






