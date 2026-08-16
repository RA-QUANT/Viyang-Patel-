#include<stdio.h>
int main()
{
    float a , b , c , d ;
    printf("Average Marks Calculator , Please Enter Your Marks Of Three Subjects ");
    scanf("%f,%f,%f",&a ,&b , &c );
    d= a/3+b/3+c/3;
    printf("%f",d);
    return 0;
    
}