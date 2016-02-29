#include <stdio.h> /* usado para printf e scanf */

int main(void){
  int x;
  char nome[10]="alcebiade";
  char c;
  char *pnome;
  int *pint;
  pnome = nome;
  c = 'a';
  x = 500;
  printf("size = %ld\n", sizeof(nome));
  printf("size = %ld\n", sizeof(pnome));
  printf("%c = %d \n", *pnome, *pnome);
  
  printf("antes = %p\n", pnome);
  pnome = pnome+1;
  printf("depois = %p\n", pnome);

  pint = nome;

  printf("antes = %c\n", *pint);
  pint = pint+1;
  printf("depois = %c\n", *pint);
  pint--;
  printf("depoiss = %c\n", *pint);


  printf("antes = %p\n", pint);
  pint = pint+1;
  printf("depois = %p\n", pint);
  
  printf("%c = %d \n", *pnome, *pnome);


  // printf("nome = %s\n",pnome);
  // printf("%c = %d \n", c,c);
  // printf("%d\n",x);
  // printf("digita aih: ");
  // scanf("%d",&x);
  // printf("%p\n",&x);
}
