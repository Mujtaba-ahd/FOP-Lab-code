#include <stdio.h>

int main(void){
    float temp;
    printf("Enter temprature : ");
    scanf("%f",&temp);
    if(temp <= 0 )
        printf("The water is ice");
    else if(temp > 0 && temp < 100)
        printf("The water is liquid");
    else
        printf("The water is a steam");
}