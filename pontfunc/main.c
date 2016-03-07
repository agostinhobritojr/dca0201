#include <stdio.h>
#include <stdlib.h>

void menu(){
  printf("\nOpcoes:\n");
  printf("1 - entrar valores\n");
  printf("2 - soma\n");
  printf("3 - subtracao\n");
  printf("4 - multiplicacao\n");
  printf("5 - divisao\n");
  printf("6 - sair\n");
  printf("Digite a operação: ");
}

int soma(int x, int y){
  return (x+y);
}

int subt(int x, int y){
  return (x-y);
}

int mult(int x, int y){
  return (x*y);
}
int divs(int x, int y){
  return (x/y);
}

int main(void){
  int opcao=1;
  int x, y, result;
  int ret;
  // ponteiro para funcao
  int (*oper) (int, int);

  while(1){
    menu();
    ret = scanf("%d", &opcao);
    printf("return = %d\n", ret);
    if(ret){
      switch(opcao){
      case 1:
        printf("digite x e y: ");
        scanf("%d %d", &x, &y);
        break;
      case 2:
        oper = soma;
        break;
      case 3:
        oper = subt;
        break;
      case 4:
        oper = mult;
        break;
      case 5:
        oper = divs;
        break;
      case 6:
        exit(0);
      }
      if(opcao > 1 && opcao < 6){
        result = oper(x,y);
        printf("endereco = %p\n",oper);
        printf("resultado = %d \n", result);
      }
    }
    else{
      getchar();
    }
  }
  return 0;
}

