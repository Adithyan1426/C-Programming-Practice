#include<stdio.h>
void main()
{
    int num1,fib;
    printf("enter a number\n");
    scanf("%d",&num1);
    fib=fibf(num1);
    printf("The result is %d",fib);
}
int fibf(k)
{

    if (k==1)
    {
        return 0;

    }
    else
    {
       return (k+fibf(k-1));
    }

}
