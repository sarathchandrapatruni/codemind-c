#include<stdio.h>
int main()
{
    int r,c,i,j;
    scanf("%d%d",&r,&c);
    int ar[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    int sum=0;
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
         sum=sum+ar[i][j];
        }
        printf("%d ",sum);
    }
}