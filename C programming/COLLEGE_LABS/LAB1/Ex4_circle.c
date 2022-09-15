//to calculate the area and the circumference of the circle

#include<stdio.h>

int main()
{
    float rad, pi=3.14,area, c;
    printf("\nEnter the radius of a circle: ");
    scanf("%f",&rad);

    area=pi*rad*rad;
    printf("\nThe area of the circle with given radius %f is: %f",rad,area);

    c=2*pi*rad;
    printf("\nThe circumference of the circle with given radius %f is: %f",rad,c);


    
    return 0;
}