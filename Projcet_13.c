#include<stdio.h>
int main()
{
    float a ,b , c , d ;
    printf(" Byts To KB , MB And GB Convertor");
    scanf("%f", &a)
    b = a/1024 ;
    c = a/1048576;
    d =a/1073741824;
    printf("%f , %f , %f ", b , c , d );
    return 0;
    
}