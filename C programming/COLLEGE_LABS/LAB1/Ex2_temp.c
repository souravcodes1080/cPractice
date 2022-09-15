//to convert celcius from degree fehrenhiet to degree celcius


#include<stdio.h>

void main()
{
    float c, f;

    printf("\nEnter today's temperature in degree F:");
    scanf("%f",&f);     //input degree F 

    c=(f-32)*(0.55);    //conversion formula

    printf("today's temperature in degree celcius is: %f",c);
    
}