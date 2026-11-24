#include<stdio.h>
void main()
{
    int a[10],i;
    printf("enter 10 number\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0;
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}
