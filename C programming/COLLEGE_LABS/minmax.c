#include <stdio.h>
void main()
{
    int a[50], n, i, min, max;
    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:-- ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    min = max = a[0];
    for (i = 1; i < n; i++)
    {
        if (min > a[i])
            min = a[i];
        if (max < a[i])
            max = a[i];
    }
    
    printf("The min is:%d", min);
    printf("The max is:%d", max);
}