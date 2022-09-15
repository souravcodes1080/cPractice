#include<stdio.h>
void main(){
    int c;
    printf("\nEnter a character: ");
    scanf("%c",&c);
    if(65<=c<=90){
        printf("Its an uppercase alphabet!");
        printf("To lower case: %c",c+32);
    
    }
    else if(97<=c<=122){
        printf("Its a lowercase alphabet!");
        printf("To uppercase: %c",c-32);
    }
    else if(48<=c<=57){
        printf("Its a number!");
    }
    else{
        printf("Its a symbol!");
    }
}