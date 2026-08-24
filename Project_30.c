#include<stdio.h>
int main()
{
    int a , b ;
    printf(" Hello , Welcome To Divisibility Tester For Any Number In Respect To 7 , Please Enter The Number\n");
    scanf("%d", &a );
    b = a%7;
    if( b == 0 )
    printf ("The Number Entered Is Completly Divisible By 7 ");
    else 
    printf("The Number Is Not Divisible By 7 and Leaves the Remainder of %d ", b );
    return 0;
}