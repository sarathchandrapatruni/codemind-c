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
    int max=ar[0];
    for(i=0;i<a;i++)
    {
        if(max<ar[i])
        max=ar[i];
    }
    printf("%d",max);
}