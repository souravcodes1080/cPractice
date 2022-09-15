//To insert an item on a desired position and to remove a desired item from an array.

#include<stdio.h>

int main(){
    
    //declaring an array and other variables.
    int arr[50];
    int size,i,j;
    int newItem,pos,removeItem;
    printf("\nEnter array size: ");
    scanf("%d",&size);
    
    //array input-->
    printf("\nEnter array elements: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    //new item and position input-->
    printf("\nEnter new element: ");
    scanf("%d",&newItem);
    printf("\nEnter position: ");
    scanf("%d",&pos);
    
    
    //logic for inserting the item-->
    for(i=size-1;i>=pos-1;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos-1]=newItem;
    size++;
    
    //final array output. 
    printf("\nThe edited array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    
    //to remove an item.
    printf("\nEnter item to be removed: ");
    scanf("%d",&removeItem);
    
    
    //logic for removing an item-->
    for(i=0;i<size;i++){
        if(arr[i]==removeItem)
        {
            for(j=i;j<size;j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    size--;
    
    
    //final array output.
    printf("\nThe edited array is: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}