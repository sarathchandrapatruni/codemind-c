#include<stdio.h>
int main()
{
    int a,i,sum=0,f=0;
    float avg;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        sum=sum+ar[i];
    }
    avg=(sum)/a;
    for(i=0;i<a;i++)
    {
        if(avg==ar[i])
        {
            f=1;
        }
    }
    if(f==1)
    printf("True");
    else
    printf("False");
}