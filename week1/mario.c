#include <stdio.h>

int main(void){

 /* for (int i = 0; i < 4; i++){
    printf("?");
  }
  printf("\n");

  for (int j = 0; j < 3; j++ ){
    printf("▣\n");
  }
*/

  int height;
  int width;

  do {
    height = printf("Size h:");
    scanf("%i", &height);

    width = printf("Size w:");
    scanf("%i", &width);
  }
  while (height < 1 || width < 1);


  for(int i = 0; i < height; i++){ //altura 
    for(int j = 0; j < width; j++){ //largura
      printf("#");
    }
    printf("\n");
  }
}
