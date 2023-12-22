#include<stdio.h>
int main()
{
    int a,i,f=0;
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
        {
            f=1;
            break;
        }
    }
    if(f)
    printf("True");
    else
    printf("False");
}