#include <stdio.h>

int main()
{
    int num;
    printf(" what is your number \n");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("your number is 1");
    }
    else if (num == 2)
    {
        printf("your number is 2");
    }
    else if (num == 3)
    {
        printf("your number is 3");
    }
    else
    {
        printf(" your number is not 1, 2 or 3");
    }
    return 0;
}