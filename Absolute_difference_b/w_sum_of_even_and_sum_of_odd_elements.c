#include<stdio.h>
int main()
{
    int a,i,sum=0,sum1=0;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        if(ar[i]%2==0)
        sum=sum+ar[i];
        else
        sum1=sum1+ar[i];
    }
    if(sum1>sum)
    printf("%d",sum1-sum);
    else
    printf("%d",sum-sum1);
}