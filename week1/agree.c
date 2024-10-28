#include <stdio.h>

int main(){
  char quote;

  printf("Do you agree? ");
  scanf("%c", &quote);

  if(quote == 'y' || quote == 'Y'){ //usa-se aspas simples apenas para caracteres. e duplas para strings
    printf("You agree.\n");
  } else if (quote == 'n' || quote == 'N'){
    printf("You don't agree.\n");
  }else {
    printf("Wrong answer.\n");
  }
}
