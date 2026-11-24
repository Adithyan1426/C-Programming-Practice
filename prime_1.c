#include<stdio.h>
void main()
{
    int n,i,isprime=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("niether a prime not composite");
    }
    else
    {
       for(i=2;i<n/2;i++)
        {
        if(n%i==0)
        {
           isprime=0;
           break;
        }
        }
        if(isprime=0)
        {
            printf("not prime");

        }
        else
        {
            printf(" prime");
        }
    }

}
