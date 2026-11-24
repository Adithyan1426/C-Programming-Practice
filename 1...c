#include <stdio.h>

int fibf(int k);

int main()
{
    int num1, fib;

    printf("Enter a number: ");
    scanf("%d", &num1);

    fib = fibf(num1);

    printf("The Fibonacci number is %d\n", fib);

    return 0;
}

int fibf(int k)
{
    if (k == 0)
    {
        return 0;
    }
    else if (k == 1)
    {
        return 1;
    }
    else
    {
        return fibf(k - 1) + fibf(k - 2);
    }
}
