#include<stdio.h>
int main()
{
    int a,i,c=0;
    scanf("%d",&a);
    int ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&ar[i]);
        
    }
    int s;
    scanf("%d",&s);
    for(i=0;i<a;i++)
    {
        if(ar[i]==s)
        c++;
    }
    printf("%d ",c);
}