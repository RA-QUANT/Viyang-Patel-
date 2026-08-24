#include<stdio.h>
int main()
{
   float a , b ;
   printf("Enter Any Number\n");
   scanf("%f",&a );
   printf("Enter A Second Number\n");
   scanf("%f",&b );
   if(a>b)
   printf("The First Number %f is the largest and the Second Number %f is the smallest", a , b);
   else 
   printf("The First Number %f is the smallest and the second number %f is the largest", a , b);
   return 0;

}