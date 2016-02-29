#include <stdio.h>
#include <stdlib.h>

int main(void){
  int nalunos;
  int i;
  int *idade;
  printf("digite o no de alunos: ");
  scanf("%d",&nalunos);
  printf("vai alocar\n");
  idade = (int*) malloc(nalunos*sizeof(int));
  printf("--alocou\n");
  /*  int idades[nalunos];*/
  for(i=0; i<nalunos; i++){
	scanf("%d",&idade[i]);
  }

  free(idade);
}
