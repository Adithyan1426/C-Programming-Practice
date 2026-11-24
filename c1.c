#include<stdio.h>
void main()
{
    int num1,num2,opt;
    float result;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("Enter 1 for addition 2 for subtraion 3 for multiplication 4 for division\n");
    scanf("%d",&opt);
    switch(opt)
    {
    case 1:
        result=num1+num2;
        break;
    case 2:
        result=num1-num2;
        break;
    case 3:
        result=num1*num2;
        break;
    case 4:
        result=num1/num2;
        break;


    }
    printf("%f",result);
}
