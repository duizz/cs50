#include <stdio.h>

void meow(int n){

  for(int i = 0; i < n ; i++){
    printf("meow\n");
  }

    if(n <= 0){
    printf("sem miaus por hj :V\n");
  }
}

int main(){
  int n;
  printf("Digite quantas vezes deseja: ");
  scanf("%i", &n);
  meow(n);
}
