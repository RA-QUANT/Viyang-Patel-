#include<stdio.h>
int main()
{
    float a , b , c ;
    printf("Enter Value Of a ");
    scanf("%f", &a );
    printf("Enter Value Of b");
    scanf("%f", &b );
    printf("Before Swapping : a = %f and b = %f\n", a , b );
    c = a ;
    a = b ;
    b = c ;
    printf("After Swapping : a = %f and b = %f\n", a , b );
    return 0;
}