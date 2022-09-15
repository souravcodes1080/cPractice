#include <stdio.h>
int main()
{
    int n, flag, i;
    printf("Enter the number to check if it is a prime or not: ");
    scanf("%d", &n);
    if (n == 0 || n == 1)
        flag = 1;
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
            flag = 1;
    }
    if (flag == 1)
        printf("not prime");
    else
        printf("prime");
}