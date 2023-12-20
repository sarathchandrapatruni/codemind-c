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
    int min=ar[0];
    for(i=0;i<a;i++)
    {
        if(min>ar[i])
        min=ar[i];
    
    }printf("%d",min);
}