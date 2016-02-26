/* para compilar
   $ gcc troca.c -o troca
 */
#include <stdio.h>

int alo;

void troca(int x, int y);

int main(void){
  int x, y;
  x = 3; y = 4;
  printf("main  - x = %d, y=%d \n", x, y);
  troca(x,y);
  printf("main  - x = %d, y=%d \n", x, y);
}

void troca(int x, int y){
  int z;
  printf("troca - x = %d, y=%d \n", x, y);
  z = x; x = y; y = z;
  printf("troca - x = %d, y=%d \n", x, y);
}

