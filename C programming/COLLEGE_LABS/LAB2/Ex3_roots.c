#include<stdio.h>
#include<math.h>
void main()
{
    float a,b,c,d;
    float r1,r2;
    printf("\n Enter a, b, c: ");
    scanf("%f%f%f",&a,&b,&c);
    d=(b*b)-(4*a*c);
    if(d<0){
        printf("Roots are imaginary");
    }
    else if(d==0){
        printf("Roots are equal");
        r1=r2=-b/(2*a);
        printf("R1=R2=%f",r1);
    }
    else if(d>0){
        r1=(-b+sqrt(d))/(2*a*c);
        r2=(b+sqrt(d))/(2*a*c);
        printf("Roots are different and r1=%f and r2=%f",r1,r2);
    }
    
}