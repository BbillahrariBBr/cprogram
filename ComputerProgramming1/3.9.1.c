#include<stdio.h>

int main()
{
    char ch = getchar();

    if (ch >= 'a' &&  ch <= 'z')
    {
        printf("%c is lower case\n",ch);
    }

   else if (ch>='A' && ch<= 'Z')
    {
        printf("%c is Upper case\n",ch);
    }
    return 0;
}
