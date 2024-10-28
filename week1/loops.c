#include <stdio.h>

int main(void){
  int i = 0;

  printf("Usando while loops\n");
  while(i < 3){
    printf("meow.\n");
    i++;
  }
  
  printf("Usando for loops\n");
  for (int j = 0; j < 3; j++) {
    printf("meow.\n");
  }
}

