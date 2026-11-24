#include<stdio.h>
void main()
{
    int a=5,b=10;
    printf(" a=%d,b=%d\n",a,b);
    swapf(&a,&b);
    printf("after swaping a=%d,b=%d",a,b);
}
 void swapf(int *p1,int *p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=*p1;

}
