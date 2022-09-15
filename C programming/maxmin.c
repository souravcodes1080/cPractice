#include<stdio.h>

void main()
{
    int n,max, min;
    printf("\nEnter the number of elements you want to store:- ");
    scanf("%d",&n);
    printf("Enter elements one by one----\n");
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    max=arr[0];
    min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for (int i=1; i<n; i++){
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("\nThe maximum value is %d, and the minimum value is %d",max,min);
    
} 