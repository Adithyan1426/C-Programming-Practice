#include<stdio.h>
void main()
{
    char a[100];
    int i=0,count=0,r=0,len;
    printf("enter a string\n");
    scanf("%s",a);
    while(a[i]!='\0')
    {
      i++;
    }
    len = i;
    for(i=0;i<len;i++)
    {
        if(a[i] >= 'A' && a[i] <= 'Z')
        {
            count=count+1;
        }
        else if(a[i]>='a' && a[i]<='z')
        {
            r+=1;
        }
    }
    printf("upper=%d and lower=%d",count,r);
}
