#include<stdio.h>
int main()
{
    int a,i,sum=0;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        if(ar[i]%2==1)
        sum=sum+ar[i];
    }
    printf("%d",sum);
}