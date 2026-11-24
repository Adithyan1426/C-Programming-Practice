#include<stdio.h>
void main()
{
    int r1,c1,c2,r2,i,j;
    printf("enter no of rows and coloumns in mat A");
    scanf("%d%d",&r1,&c1);
    int a[r1][c1],b[r1][c1];
    printf("enter elemets of A\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");

    }
}
