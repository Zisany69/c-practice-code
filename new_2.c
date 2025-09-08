#include <stdio.h>

int main()
{
    int a;

    printf("enter year to find leap year -");
    scanf("%d", &a);

    if (((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0)))
    {
        printf("this year is leap year");
    }
    else
    {
        printf("common year");
    }

    return 0;
}