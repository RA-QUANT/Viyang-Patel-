#include<stdio.h>
int main()
{
    float a , b , c ;
    printf ("Enter The First Number\n");
    scanf ("%f", &a );
    printf ("Enter The Second Number\n");
    scanf ("%f", &b );
    printf("Enter The Third Number\n" );
    scanf("%f", &c );
    if((a>b)&&(a>c))
    printf("%.2f Is The Greatest Number", a );
    if((b>c)&&(b>a))
    printf("%.2f Is The Greatest Number", b );
    if((c>a)&&(c>b))
    printf("%.2f Is The Greatest Number", c );
return 0;
}