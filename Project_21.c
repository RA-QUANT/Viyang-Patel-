#include<stdio.h>
int main()
{
    float a , b ,c , d ;
    printf("Welcome To Net Salary Calculator , Enter Your Gross Salary");
    scanf("%f", &a);
    b = 0.1*a;
    c = 0.03*a;
    d = a + b - c ;
    printf("%f",d);
    return 0;
}