#include<stdio.h>
int main()
{
    int n,sum=0,i;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        n=n/10;
        sum++;
    }
    printf("%d",sum);
    return 0;
}
