#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if((N>1)&&(N<100000))
    {
        if(N%2==0)
        {
            printf("Even");
        }
        else
        {
            printf("Odd");
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
    
}
