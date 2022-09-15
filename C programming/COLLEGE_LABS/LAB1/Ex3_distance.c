//to calculate the distance between two points

#include<stdio.h>
#include<math.h>
void main()
{
    int x1,x2, y1, y2;
    float calc;
    printf("\nEnter the X coordinates: ");
    scanf("%d%d",&x1,&x2);

    printf("\nEnter the Y coordinates: ");
    scanf("%d%d",&y1,&y2);

    //distance= sqroot{(x1-x2)^2 - (y1-y2)^2}
    calc=sqrt(pow((x1-x2),2)+pow((y1-y2),2));
    
    printf("\nThe distance between the given points is:%f",calc);

}