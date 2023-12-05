#include<stdio.h>
int main()
{
    int a,b,c=0,t;
    scanf("%d",&a);
    t=a;
    while(a!=0)
    {
        b=a%10;
        c=c*10+b;
        a=a/10;
    }
    if(t==c)
    printf("True");
    else
    printf("False");
}