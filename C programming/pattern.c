#include<stdio.h>

void main()
{
    int i,j,k,l,m;
    for(i=5;i>=1;i--){
        for(j=1;j<=i;j++){
            printf("_");
        }
        for(k=5;k<=2*i-1;k--){
            printf("*");
        i--;
        }
        
        
        
        
        printf("\n");
    }
}