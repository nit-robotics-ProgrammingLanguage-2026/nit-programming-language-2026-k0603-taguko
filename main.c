#include <stdio.h>

int main(void)
{
    long n;
    long i;
    long sum = 0;
    scanf("%ld", &n);
    if (n < 0)
    {
        printf("NG");
        return 0;
    }
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%ld", sum);
    return 0;
}
