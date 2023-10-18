#include <stdio.h>

int main (void){
    float kg, ht, bmi;
    printf("Wieght in kilograms : ");
    scanf("%f",&kg);
    printf("Height in meters : ");
    scanf("%f",&ht);
    bmi = kg/pow(ht,2);
    if(bmi < 18.5)
    printf("You are underweight");
    else if(bmi >= 18.5 && bmi <= 24.9)
    printf("You are normal");
    else if(bmi >= 25 && bmi <= 29.9)
    printf("You are normal");
    else
    printf("You are obese");
}