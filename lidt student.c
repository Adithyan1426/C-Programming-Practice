#include<stdio.h>
#include<string.h>
struct student{
    char name[50];
    int adm;
    };
void main()
{
    struct student temp;
    int n, roll,j;
    int i;
    printf("enter no studement\n");
    scanf("%d",&n);
    struct student s[n];
    for( i=0;i<n;i++)
    {
        printf("enter name and adm no of%d\n",i+1);
        scanf("%s%d",s[i].name,&s[i].adm);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(s[j].name,s[j+1].name) >0)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
    for (i=0;i<n;i++)
    {
        printf("roll:%d name :%s adm %d\n",i+1,s[i].name,s[i].adm);
    }
}
