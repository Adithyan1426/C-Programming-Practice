#include<stdio.h>
void main()
{
    FILE *ptr;
    FILE*p;
    ptr=fopen("adi.txt","r");
    char ch;
    ch =fgetc(ptr);
    if(ptr==NULL)
    {
        printf("not accessible");
    }
    while(ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(ptr);
    }
    p=fputs(ch);
}
