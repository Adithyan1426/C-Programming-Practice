#include<stdio.h>
void main()
{
    int a[10],i,j,b[10],large;
    printf("enter 10 number\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);

    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9-i;j++)
        {
            if(a[j]<a[j+1])
            {
               large=a[j+1];
               a[j+1]=a[j];
               a[j]=large;

            }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%d\n",a[i]);
    }
}
