#include <stdio.h>

int main()
{
    int i = 0, n, sum = 0;

    printf("enter your number= ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum = sum + i;
        if (i % 2 != 0)
        {
            printf("odd numbers %d\n", i);
        }
        i++;
    }
    printf("the sum of all odd number %d", sum);

    return 0;
}