#include <stdio.h>

int main()
{
    // this project is about simple interest rate

    float r;
    int p, t;

    printf("enter amount of money-\n");
    scanf("%d", &p);

    printf("interest rate-\n");
    scanf("%f", &r);

    printf("time for how years-\n");
    scanf("%d", &t);

    printf("the simple interest rate %f", (p * t * r) / 100);

    return 0;
}