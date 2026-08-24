#include<stdio.h>
int main()
{
    float a , b , c ,d ;
    printf("Enter the Gross Salary\n");
    scanf("%f", &a );
    
    if(a>=10000)
    {
    b = 0.1*a ;
    c = 0.03*a ;
    d = a + b - c ;
    printf("The Net salary Is %.2f ", d );
    }
    
     else if(a>=5000)
    {
        b = 0.07*a ;
        c = 0.03*a ;
        d = a + b - c ;
        printf(" The Net Salary is %.2f ", d);
    }
    
    else 
    {
    printf("I SEEEE NO MONEYYYYY");
    };
    return 0;
}