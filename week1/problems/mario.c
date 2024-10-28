#include <stdio.h>

void print_rows(int bricks);

int main(void){    
    int n;

    do
    {
        n = printf("height: ");
        scanf("%i", &n);
        
    } while (n < 1);
    
    for(int i = 0; i < n; i++){ //altura
        print_rows(i + 1);
    }
}

void print_rows(int bricks){

    for(int i = 0; i < bricks; i++){
        printf("#");
    }
    printf("\n");
}