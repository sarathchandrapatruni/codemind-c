#include<stdio.h>
int main()
{
    int a,i,even=0,odd=0;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
    }
    for(i=0;i<a;i++)
    {
        if(i%2==0)
        even=even+ar[i];
        else
        odd=odd+ar[i];
    }
    if(even>odd)
    printf("%d",even-odd);
    else
    printf("%d",odd-even);
}