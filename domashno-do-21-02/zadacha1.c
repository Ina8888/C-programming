#include <stdio.h>

void main(){

    double a, b;

    printf("\n a="); 
    scanf("%lf", &a);
    printf("\n b="); 
    scanf("%lf", &b);

    double * p = &a;
    double * p1 = &b;
    printf("\n p = %p, p1= %p", p, p1);
    printf("\n a= %lf, b= %lf", a, b);
}