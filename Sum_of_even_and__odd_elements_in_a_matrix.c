#include<stdio.h>
int main()
{
    int r,c,i,j,even=0,odd=0;
    scanf("%d%d",&r,&c);
    int ar[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(ar[i][j]%2==0)
            even=even+ar[i][j];
            else
            odd=odd+ar[i][j];
        }
    }
    printf("%d %d",even,odd);
}
