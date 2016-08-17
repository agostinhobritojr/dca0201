#include <stdio.h>
// para malloc() e free()
#include <stdlib.h>

int main(void){
  int nalunos;
  float *idade;
  float *copia;
  int *jose;
  int i;
  nalunos = 10;

  // os ponteiros no S.O. do computador
  // ocupam a mesma quantidade em BYTES
  printf("tamanho de idade = %d\n",
         sizeof(idade));
  printf("tamanho de jose = %d\n",
         sizeof(jose));

  // alocar memoria para o array idade
  idade = (float*)
      malloc(nalunos*sizeof(float));

  // alocar memoria para o array copia
  copia = (float*)
      malloc(nalunos*sizeof(float));

  printf("endereco de idade  = %p\n",
         &idade);
  printf("endereco reservado = %p\n",
         idade);

  for(i=0; i<nalunos; i++){
    idade[i] = rand()%20;
  }

  for(i=0; i<nalunos; i++){
    copia[i] = idade[i];
  }

  for(i=0; i<nalunos; i++){
    printf("%4.2f, ", copia[i]);
  }

  memcpy(copia, idade,
         nalunos*sizeof(float));

  for(i=0; i<nalunos; i++){
    printf("%4.2f, ", copia[i]);
  }

  printf("\n");
  free(idade);
  free(copia);
  return 0;
}

