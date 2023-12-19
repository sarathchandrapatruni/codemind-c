#include<stdio.h>
int main()
{
    int a,i,sum=0;
    float avg;
    scanf("%d",&a);
    float ar[a];
    for(i=0;i<a;i++)
    {
        scanf("%f",&ar[i]);
        sum=sum+ar[i];
    }
    avg=(sum*1.0)/a;
    printf("%.2f",avg);
}