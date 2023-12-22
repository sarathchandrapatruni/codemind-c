#include<stdio.h>
int main()
{
    int r,c,i,j,f=0;
    scanf("%d%d",&r,&c);
    int ar[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&ar[i][j]);
        }
        
    }
    int s;
    scanf("%d",&s);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(ar[i][j]==s)
            {
                f=1;
                break;
            }
        }
    }
    if(f)
    printf("1");
    else
    printf("0");
}