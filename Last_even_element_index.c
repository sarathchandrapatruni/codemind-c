#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=a-1;i>=0;i--)
    {
        if(ar[i]%2==0)
        {
            printf("%d",i);
            break;
        }
    }
}