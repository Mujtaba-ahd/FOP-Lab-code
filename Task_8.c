#include <stdio.h>

int main (void){
    int day_num;
    printf("Enter week day : ");
    scanf("%d",&day_num);
    switch (day_num)
    {
    case 3:
    printf("Monday\n");
    break;
    case 4:
    printf("Tuesday\n");
    break;
    case 5:
    printf("Wednesday\n");
    break;
    case 6:
    printf("Thursday\n");
    break;
    case 7:
    printf("Friday\n");
    break;
    case 2:
    printf("Saturday\n");
    break;
    case 1:
    printf("Sunday\n");
    break;
    default:
        printf("Error\n");
    break;
    }
}