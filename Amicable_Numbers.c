#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,e;
    scanf("%d%d",&a,&b);
    for(e=1;e<a;e++)
    {
        if(a%e==0)
        c=c+e;
    }
    for(e=1;e<b;e++)
    {
        if(b%e==0)
        d=d+e;
    }
    if(c==b && d==a)
    printf("Amicable");
    else
    printf("Not Amicable");
    

}