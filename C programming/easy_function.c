#include<stdio.h>
float areaSquare(int side);
float areaRect(int length,int bredth);
float areaCircle(int rad);

int main()
{
    printf("\nSquare:  enter side- ");
    int side;
    scanf("%d",&side);
    printf("\narea=%f", areaSquare(side));

    printf("\nRectangle:  enter length, bredth- ");
    int l,b;
    scanf("%d%d",&l,&b);
    printf("\narea=%f", areaRect(l,b));

    printf("\nCircle:  enter radius- ");
    int r;
    scanf("%d",&r);
    printf("\narea=%f", areaCircle(rad));


    return 0;
}

float areaSquare(int side)
{
    int s;
    float area;
    area=s*s;
    return area;
}

float areaRect(int length,int bredth);
{
    int l,b;
    float area;
    area=l*b;
    return area;
}

float areaCircle(int rad);
{
    int r;
    float area;
    area=3.14*r*r;
    return area;
}