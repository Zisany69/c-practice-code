#include <stdio.h>

int main()
{

    int a;
    printf("enter your nubmer to find odd or even -");
    scanf("%d", &a);

    if (a % 2 == 0)
    {
        printf("THis is even number");
    }
    else
    {
        printf("this number is odd");
    }

    return 0;
}