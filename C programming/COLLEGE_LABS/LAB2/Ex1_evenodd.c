//to check whether a given number is even or odd

#include<stdio.h>
int main()
{
    int num;
    printf("\nEnter a number to check if it is even or odd:");
    scanf("%d",&num);

    if(num%2==0){
        printf("%d is Even.",num);
    }
    else{
        printf("%d is Odd.",num);
    }
    return 0;
}