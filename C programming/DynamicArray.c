#include<stdio.h>
void main(){
    int i,size,*arr;
    printf("Enter the values of N: ");
    scanf("%d",&size);
    arr=(int)malloc(size*sizeof(int));
    for(i=0;i<size;i++){
        scanf("%d",(arr+1));
    }
    for ( i = 0; i < size ; i++)
    {
        printf("%d ",arr[i]);
    }
    
}