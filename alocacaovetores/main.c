#include <stdio.h>
// para malloc() e free()
#include <stdlib.h>

float* realoca(float *x, int tam_ant , int tam_novo){
  float *retorno;
  int i;
  // se tam_ant == tam_novo
  if(tam_ant == tam_novo){
    return (x);
  }
  // aloca um array com o novo tamanho
  retorno = (float*) malloc(tam_novo*sizeof(float));

  // novo array eh menor que o anterior
  if(tam_ant > tam_novo){
//    memcpy(retorno, x, tam_novo*sizeof(float));
  //  for(i=0; i<tam_novo; i++){
  //    retorno[i] = x[i];
  //  }
    return(x);
  }

  // novo array eh maior que o anterior
  else{
    memcpy(retorno, x, tam_ant*sizeof(float));

    for(i=tam_ant; i<tam_novo; i++){
      retorno[i] = 0;
    }
  }
  free(x);
  return(retorno);
}



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

 // idade = realoca(idade, nalunos, 2*nalunos);

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
//    copia[i] = idade[i];
    *(copia+i) = *(idade+i);
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

