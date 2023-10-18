#include <stdio.h>

int main (void){
    double num1, num2;
    char oper;
    printf("Enter operation (+ , - , * , /) : ");
    scanf("%c",&oper);
    printf("Enter 2 numbers : ");
    scanf("%lf %lf",&num1, &num2);
    switch (oper)
    {
    case '+':
    printf("The result is %lf",num1+num2);
    break;
    case '-':
    printf("The result is %lf",num1-num2);
    break;
    case '*':
    printf("The result is %lf",num1*num2);
    break;
    case '/':
    if (num2 != 0)
    printf("The result is %lf",num1-num2);
    else
    printf("Math Error");
    break;
    default:
        printf("Enter an operator");
    break;
    }
}