#include <stdio.h>

int main()
{
    int score;

    printf("enter your result score\n");
    scanf("%d", &score);

    if (score >= 100)
    {
        printf("top in the class\n");
    }

    else if (score >= 90)
    {
        printf(" A+ \n");
    }

    else if (score >= 80)
    {
        printf("A\n");
    }
    else if (score >= 70)
    {
        printf("A-\n");
    }

    else if (score >= 60)
    {
        printf("B\n");
    }
    else if (score >= 50)
    {
        printf("C\n");
    }
    else if (score >= 90)
    {
        printf("D\n");
    }
    else if (score >= 90)
    {
        printf("E\n");
    }
    else
    {
        printf("you have failed\n");
    }

    return 0;
}