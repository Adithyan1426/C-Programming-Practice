#include <stdio.h>

void checkPrime(int num);  // Function declaration

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    checkPrime(num);
    return 0;
}

void checkPrime(int num)
{
    int i, isPrime = 1;

    if (num <= 1) {
        printf("The number %d is not a prime number.\n", num);
        return;
    }

    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime=0)
        printf("The number %d is a prime number.\n", num);
    else
        printf("The number %d is not a prime number.\n", num);
}
