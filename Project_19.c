#include<stdio.h>
int main()
{
    float a , b ;
    printf("Area Of Circle Calculator, Enter The Radius ");
    scanf("%f", &a);
    b = 3.14*a*a;
    printf("%fm^2",b);
    return 0;
}