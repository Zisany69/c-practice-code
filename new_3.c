#include <stdio.h>

int main()
{
    char a;
    printf("enter your chracter -");
    scanf("%c", &a);

    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
    {
        printf("%c this is alphabate", a);
    }
    else if ((a >= '0' && a <= '9'))
    {
        printf(" %c this is a digit", a);
    }

    else
    {
        printf("%c this is a spicial symble", a);
    }

    return 0;
}