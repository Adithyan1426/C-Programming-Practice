#include<stdio.h>
void main()
{
    char a[100],ch;
    printf("enter a string\n");
    scanf("%s",a);
    ch=a;
    int l=0;
    while(ch!='\0')
    {
        l++;
        ch=a[l];


}
 printf("%d",l);
}
