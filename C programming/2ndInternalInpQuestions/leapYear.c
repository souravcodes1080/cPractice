#include<stdio.h>
int main(){
    int year;
    printf("Enter a year to check if it is a leap year or not: ");
    scanf("%d",&year);
    if(year%400==0)
        printf("leap year");
    else if(year%100==0)
        printf("Not a leap year");
    else if(year%4==0)
        printf("leap year");
    else   
        printf("not a leap year");
}