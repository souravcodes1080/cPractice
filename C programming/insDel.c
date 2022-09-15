#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void takeInput(int[], int);
void displayArray(int[], int);
void insertArray(int[], int, int, int);
void delectArray(int[], int, int);
void reverseArray(int[], int);
int main()
{
    system("cls");
    int size, i, ch, pos, item;
    int arr[100];
    printf("\nEnter array size: ");
    scanf("%d", &size);
    takeInput(arr, size);
    printf("\nThe array you have entered is: ");
    displayArray(arr, size);

    while (2 > 0)
    {

        printf("\n \n 0. To Exit\n 1. To insert\n 2. To delect\n 3.To reverse\n\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            printf("\n\nProgram ended sucessfully!!");
            exit(0);
        case 1:
            insertArray(arr, size, pos, item);
            size++;
            break;
        case 2:
            delectArray(arr, size, pos);
            size--;
            break;
        case 3:
            reverseArray(arr, size);
            break;
        }
    }
    return 0;
}

void takeInput(int a[], int n)
{
    printf("\nEnter array elements: ");
    int i;
    for (i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }
}

void displayArray(int a[], int n)
{

    int i;
    for (i = 1; i <= n; i++)
    {
        printf("%5d", a[i]);
    }
}

void insertArray(int a[], int n, int p, int x)
{
    int i;
    printf("\nEnter item you want to insert: ");
    scanf("%d", &x);
    printf("\nEnter the position: ");
    scanf("%d", &p);
    if (n > p)
    {

        for (i = n; i >= p; i--)
        {
            a[i + 1] = a[i];
        }
        a[p] = x;
        n++;
        printf("\nThe edited array is: ");
        displayArray(a, n);
    }
    else
    {
        printf("\nThe position is exceeding the limit!!");
    }
}

void delectArray(int a[], int n, int p)
{
    int i;
    printf("\nEnter the position you want to delete: ");
    scanf("%d", &p);
    for (i = p; i <= n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
    printf("\nThe edited array is: ");
    displayArray(a, n);
}

void reverseArray(int a[], int n)
{
    int i;
    for (i = n; i >= 1; i--)
    {
        printf("%5d", a[i]);
    }
}