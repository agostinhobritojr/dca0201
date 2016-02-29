#include <stdio.h>
#include <stdlib.h>

int main(void){
  int nalunos;
  int i;
  int *idade;
  float media;
  float variancia;
  printf("digite o no de alunos: ");
  scanf("%d",&nalunos);
  printf("vai alocar\n");
  idade = (int*) malloc(nalunos*sizeof(int));
  printf("--alocou\n");
  /*  int idades[nalunos];*/
  for(i=0; i<nalunos; i++){
    printf("digite aluno %d: ", i);
    scanf("%d",&idade[i]);
  }
  // calcular a media e variancia
  for(i=0, media=0; i<nalunos; i++){
    media+=idade[i];
  }
  media/=nalunos;
  for(i=0, variancia=0; i<nalunos; i++){
    variancia+=(idade[i]-media)*(idade[i]-media);
  }
  variancia/=nalunos;
  printf("media = %d; variancia = %d\n",
         media,variancia);
  free(idade);
}
