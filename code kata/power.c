#include <stdio.h>
int main()
{
    int n1, n2;

    long long result = 1;

    scanf("%d", &n1);


    scanf("%d", &n2);

    while (n2 != 0)
    {
        result *= n1;
        --n2;
    }

    printf("%lld", result);

    return 0;
}
