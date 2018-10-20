#include<stdio.h>

int main()

{
    int number, result, reminder;

    scanf("%d", &number);

    result = number/2;

    reminder = number - (result*2);

    if (reminder == 0)
    {

        printf("%d is Even", number);
    }

    else
    {
        printf("%d is odd", number);
    }

    return 0;
}
