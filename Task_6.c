#include <stdio.h>
#include <math.h>

int main (void){
    int a, b, c;
    float det;
    printf("Enter the cofficient of x^2 : ");
    scanf("%d",&a);
    printf("Enter the cofficient of x : ");
    scanf("%d",&b);
    printf("Enter the constant : ");
    scanf("%d",&c);
    det = pow(b,2) - (4*a*c);
    if (det < 0 )
    printf("The eq. does not have real roots");
    else if (det > 0){
        float ans1 , ans2;
        ans1 = (-b) + sqrt(det);
        ans1 = ans1 / (2.0*a);
        ans2 = (-b) - sqrt(det);
        ans2 = ans2 / (2.0*a);
        printf("The 1st root is %.1f and 2nd root is %.1f",ans1 , ans2);
    }
    else{
        float ans;
        ans = (-b)/(2.0*a);
        printf("The root is %.1f",ans);
    }
    return 0;
}