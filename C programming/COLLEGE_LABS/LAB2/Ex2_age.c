//to check who is the oldest among 3

#include<stdio.h>

int main()
{
    int x,y,z;
    printf("\nWho is the oldest?!");
    printf("\nEnter the age of Mr X: ");
    scanf("%d",&x);
    printf("\nEnter the age of Mr Y: ");
    scanf("%d",&y);
    printf("\nEnter the age of Mr Z: ");
    scanf("%d",&z);

    if(x>y && x>z){
        printf("Mr X is older!");

    }
    else if(y>z){
        printf("Mr Y is older!");

    }
    else{
        printf("Mr Z is older!");
    }
    return 0;
}