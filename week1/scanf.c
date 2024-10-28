#include <stdio.h>

int main (void){
  char name[61];

  printf("What's your name? ");
  scanf("%s", name); //recebe uma string com %s

  printf("Hello, %s\n", name);

  return 0;
}
