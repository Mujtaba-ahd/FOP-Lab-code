#include <stdio.h>

int main(void){
    char in;
    printf("Enter a character : ");
    scanf("%c",&in);
    if ( in == 'a' || in == 'e' || in == 'i' || in == 'u' || in == 'o' || in == 'A' || in == 'E' || in == 'I' || in == 'O' || in == 'U')
        printf("It is a vowel\n");
    else
        printf("It is a constant\n");
}