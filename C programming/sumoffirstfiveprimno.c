#include <stdio.h>

int main()
{
    int i, j, isPrime, sum=0;


    for(i=2; i<=12; i++)
    {

 
        isPrime = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
	            isPrime = 0;
                break;
            }
        }

        
        if(isPrime==1)
        {
            sum += i;
        }
    }

    printf("Sum of all prime numbers between 1 to 5 = %d", sum);

    return 0;
}
