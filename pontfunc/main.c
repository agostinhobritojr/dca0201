//
// ponteiros para funcoes
//
#include <stdio.h>

void menu(){
  printf("\n");
  printf("1 - digitar a e b\n");
  printf("2 - somar\n");
  printf("3 - subtrair\n");
  printf("4 - multiplicar\n");
  printf("5 - dividir\n");
  printf("6 - sair\n");
  printf("digite sua opcao: ");
}

// criar as quatro operacoes
int soma(int x, int y){
  return x+y;
}

int subtracao(int x, int y){
  return x-y;
}

int multiplicacao(int x, int y){
  return x*y;
}

int divisao(int x, int y){
  return x/y;
}

int main(void){
  int a, b, c;
  int opcao = 1;

  int (*pont)(int,int);

  a = 3;
  b = 4;
  printf(" soma = %d\n", soma(a,b));
  printf("esoma = %p\n", &soma);

  pont = &soma;
  printf(" soma = %d\n", pont(a,b));


  do{
    menu();
    scanf("%d", &opcao);
    switch(opcao){
    case 1:
      printf("digite a: "); scanf("%d", &a);
      printf("digite b: "); scanf("%d", &b);
      break;
    case 2:
      pont = &soma;
      break;
    case 3:
      pont = &subtracao;
      break;
    case 4:
      pont = &multiplicacao;
      break;
    case 5:
      pont = &divisao;
      break;
    }
    if(opcao >1 && opcao <6){
      c = pont(a,b);
      printf("\n>>>result = %d\n", c);
    }
  }while(opcao != 6);
  return 0;
}

