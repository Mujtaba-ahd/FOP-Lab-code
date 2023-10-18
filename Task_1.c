#include <stdio.h>
#include <math.h>

int main(void){
    int dig1, dig2, dig3, check, dig;
    printf("Give a 3-digit number : ");
    scanf("%1d%1d%1d",&dig1,&dig2,&dig3);
    check = pow(dig1,3)+pow(dig2,3)+pow(dig3,3);
    dig = (dig1*100) + (dig2*10) + dig3;
    if (check == dig )
        printf("The number is an armstrong number");
    else
        printf("The number is not an armstrong number");
    
    return 0;
}