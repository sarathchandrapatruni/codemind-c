#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    int primeter=2 * (a+b);
    int totalcost=primeter*c;
    printf("%d",totalcost);
}