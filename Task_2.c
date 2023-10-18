#include <stdio.h>
#include <math.h>

int main(void){
    char in;
    printf("Enter a character : ");
    scanf("%c",&in);
    if (in >= 65 && in<= 90)
    printf("The entered value is a capital letter");
    else if(in >= 97 && in <= 122)
    printf("The entered value is a small letter");
    else if(in >= 48 && in <= 57)
    printf("The entered value is a number");
    else if(in >= 0 && in <= 47 || in >= 58 && in <= 64 || in >= 91 && in <= 96 || in >= 123 && in <= 127 )
    printf("The entered value is a special character");
}