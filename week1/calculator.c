#include <stdio.h>

int main(void){

  int x;
  int y;

  printf("um valor para x: ");
  scanf("%i", &x);
  printf("um valor para y: ");
  scanf("%i", &y);

  float z = (float) x / (float) y; //covertendo inteiro para float
  printf("O resultado da soma: %.2f\n", z);
}
