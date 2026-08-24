#include<stdio.h>
int main()
{
    float a , b , c ;
    printf("Enter Gross Sales To Calculate Net Sales\n");
    scanf("%f", &a);
    if(a>=20000)    
   {
    b = a*15/100;
    c = a - b ;
    printf(" The Net Sales Is %.2f", c );
   }
   else if (a>=10000)
   {
    b = a*0.1;
    c = a - b;
    printf("The Net Sales Is %.2f ", c );
   }
   else 
   {
    b = 0.05*a;
    c = a - b ;
    printf("The Net Sales Is %.2f", c );
   }
   return 0;
}
