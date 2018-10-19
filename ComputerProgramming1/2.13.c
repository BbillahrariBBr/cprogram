#include<stdio.h>

int main()
{

    char ch;
    printf("Enter a first letter of your name: ");
    // using getchar() for a character input

    ch = getchar();
    printf("The first letter of your name is: %c", ch);
    return 0;
}
