#include<stdio.h>
int main()
{ 
    float a,b,c;
    printf("Triangles Area Calculator, Enter The Height And Base Length");
    scanf("%f , %f ", &a ,&b );
    c = a*b*0.5;
    printf("%fm^2",c);
    return 0;


}