#include<stdio.h>#include <stdio.h>
int main()
{
    int k, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&n);

 
    if (n < 0)
        printf("Error! Factorial of a negative number doesn't exist.");

    else
    {
        for(i=1; i<=k; ++i)
        {
            factorial *= i;          
        }
        printf("Factorial of %d = %llu", n, factorial);
    }

    return 0;
}
