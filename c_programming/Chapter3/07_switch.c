#include <stdio.h>

int main()
{
    int a;
    printf("Enter a :");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("You enetered 1\n");
        break;
    case 2:
        printf("You enetered 2 \n");
        break;
    case 3:
        printf("You enetered 3 \n");
        break;
    case 4:
        printf("You enetered 4\n");
        break;
    default:
        printf("NOthing Matched");
    }

    return 0;
}