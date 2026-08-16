#include <stdio.h>
int main()
{
    float a ,b ,c , d, e , f ;
    print("Type Any Number I will Add , Subtract , Multiply , Divide Them ");
    scanf("%f, %f", &a , &b );
    c = a + b;
    d = a - b;
    e = a*b;
    f = a/b;
    print("%f,%f,%f,%f",c , d , f ,e);
    return 0;
    
}