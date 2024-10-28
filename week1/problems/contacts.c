#include <stdio.h>

int main(void){
    char number[100];
    char f_name[100];
    char mid_name[100];
    int age;

    printf("Whats your name? ");
    scanf("%s %s", &f_name, &mid_name);
    
    printf("Whats your age? ");
    scanf("%i", &age);

    printf("Whats you number? ");
    scanf("%s", &number);

    printf("Ok, your name is %s %s you have %i years old and your number is %s.\n", f_name, mid_name, age, number);
}