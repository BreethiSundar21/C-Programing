#include<stdio.h>
int main()
{
    int n,a,sum=0,t;
    scanf("%d",&n);
    t=n;
    while(n>0)
    {
        a=n%10;
        n=n/10;
        sum=sum+(a*a*a);
    }
        if(sum==t)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    
    return 0;
}
