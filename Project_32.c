#include<stdio.h>
int main()
{
    float a , b , c , d ;
    printf("Enter the Marks Of The First Subject\n");
    scanf("%f", &a );
    printf("Enter the Marks Of The Second Subject\n");
    scanf("%f", &b );
    printf("Enter the Marks Of The Third Subject\n");
    scanf("%f", &c );
    d= (a+b+c)/3;
    if(d>=70)
    {
    printf("Your avg = %.2f and Your Class Is Distinction ", d );
    }
   else if(d>=60)
    {
        printf("Your avg = %.2f and Your Class Is First Class ", d );
    }
    else if(d>=50)
    {
        printf("Your avg = %.2f and Your Class Is Second Class ", d );
    }
    else if(d>=35)
    {
        printf("Your avg = %.2f and Your Class Is Third Class ", d );
    }
    else
   {
    printf("Your avg = %.2f , Sorry You Have Failed !!!!! ", d );
   }
   return 0;
}