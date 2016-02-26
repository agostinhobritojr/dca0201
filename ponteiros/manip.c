#include <stdio.h> /* usado para printf e scanf */

int main(void){
  int x;
  char nome[10]="alcebiade";
  char c;
  char *pnome;
  pnome = nome;
  c = 'a';
  x = 500;
  printf("size = %ld\n", sizeof(nome));
  printf("size = %ld\n", sizeof(pnome));
  printf("%c = %d \n", *pnome, *pnome);
  pnome = pnome+1;
  printf("%c = %d \n", *pnome, *pnome);
  // printf("nome = %s\n",pnome);
  // printf("%c = %d \n", c,c);
  // printf("%d\n",x);
  // printf("digita aih: ");
  // scanf("%d",&x);
  // printf("%p\n",&x);
}
