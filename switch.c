#include <stdio.h>

int main()
{

    int age, lavel;

    printf("enter you age and need to be 18,21 and 30 -\n");
    scanf("%d", &age);

    printf("enter lavel 1,2,3\n");
    scanf("%d", &lavel);

    switch (age)
    {
    case 18:
        printf("valitd\n");
        switch (lavel)
        {
        case 1:
            printf("elegible\n");
            break;
        case 2:
            printf("your not aligible\n");
            break;
        case 3:
            printf("your not elegible\n");
            break;

        default:
            printf("this lavel doesn't exitst\n");
            break;
        }
        break;
    case 21:
        printf("valitd\n");
        switch (lavel)
        {
        case 1:
            printf("elegible \n");
            break;
        case 2:
            printf("eligible\n");
            break;
        case 3:
            printf("your not elegible\n");
            break;

        default:
            printf("this lavel doesn't exitst\n");
            break;
        }
        break;
    case 30:
        printf("valitd\n");
        switch (lavel)
        {
        case 1:
            printf("elegible\n");
            break;
        case 2:
            printf("eligible\n");
            break;
        case 3:
            printf("elegible\n");
            break;

        default:
            printf("this lavel doesn't exitst\n");
            break;
        }
        break;

    default:
        printf("please read first then answer\n");
        break;
    }

    return 0;
}