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
    if((a>b)&&(a>c)&&(b>c))
    
        printf("%.2f>%.2f>%.2f", a , b , c);
    
    if((a>b)&&(a>c)&&(c>b))
    
        printf("%.2f>%.2f>%.2f", a , c , b );
    
    if((a<b)&&(a>c)&&(b>c)) 
    
        printf("%.2f>%.2f>%.2f", b , a , c);
    
    if((a<b)&&(a<c)&&(b>c))
    
        printf("%.2f>%.2f>%.2f", b , c , a );
    
    if((a>b)&&(a<c)&&(b<c))
    
        printf("%.2f>%.2f>%.2f", c , a , b );
    
    if((a<b)&&(a<c)&&(b<c))
    
        printf("%.2f>%.2f>%.2f", c , b , a );

    return 0;

} 