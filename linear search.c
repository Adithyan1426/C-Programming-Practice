#include<stdio.h>

void main()
{
    int pos=1,n,i;
    printf("enter no of elements\n");
    scanf("%d",&n);
    int a[n],ele;

    for(i=0;i<n;i++)
    {
        printf("Enter %d element",i+1);
        scanf("%d",&a[i]);
    }
     printf("enter a elements\n");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i] == ele)
        {
            pos=1+i;
            break;
        }



    }
    if (pos==-1)
    {
        printf("no element\n");
    }
    else
    {
        printf("%d",pos);
    }


}
