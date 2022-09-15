//to swap two numbers without using third variable

#include<stdio.h>                  //including input-output header file
    
void main()                        //main function starts
{
    int num1,num2;                 //2 variables are being declared
   
    printf("\nEnter number 1:- ");
    scanf("%d",&num1);             //taking input from user for 1st number
    
    printf("Enter number 2:- ");
    scanf("%d",&num2);             //taking input from user for 2nd number
   
    printf("\nThe numbers before swapping: %d and %d.",num1,num2);
    
    num1=num1+num2;        
    num2=num1-num2;               //logic part
    num1=num1-num2;
    printf("\nThe numbers after swapping: %d and %d.",num1,num2);

}