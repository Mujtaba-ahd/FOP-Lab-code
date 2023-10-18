#include <stdio.h>

int main(void){
    int grade;
    printf("Enter marks : ");
    scanf("%d",&grade);
    if(grade >= 90)
        printf("Grade A\n");
    else if(grade >= 80)
        printf("Grade B\n");
    else if(grade >= 70)
        printf("Grade C\n");
    else if(grade >= 60)
        printf("Grade D\n");
    else
        printf("Fail\n");

    return 0;
}