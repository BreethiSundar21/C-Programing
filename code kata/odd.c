#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N<=100000)
    {
        if(N%2==0)
        {
            printf("EVEN");
        }
        else
        {
            printf("ODD");
        }
    }
    else
    {
        printf("Invalid input");
    }
    return 0;
    
}
