#include<stdio.h>
int main()
{
    float a,b,c,d;
    printf("Area And Perimeter Calculator Of Rectangle , Enter The Respective Lengths");
    scanf("%f,%f", &a, &b);
    c = a * b;
    d =  2*(a+b);
    printf("%fm^2,%fm",c , d );
    return 0;

}