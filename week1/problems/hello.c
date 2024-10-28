#include <stdio.h>

int main(void){

    printf("Hello, world!\n");

    char first_name[100];
    char mid_name[100];
    printf("What's your full name? ");
    scanf("%s %s", &first_name, &mid_name);
    printf("Hello, %s %s\n", first_name, mid_name);
}