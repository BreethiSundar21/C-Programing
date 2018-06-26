#include<stdio.h>
int main()
{
    int a[5],b,i,sum=0;
    scanf("%d",&b);
    for(i=0;i<=b;i++)
    {
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
