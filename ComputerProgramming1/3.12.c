// check consonant or vowel

#include<stdio.h>

int main()

{
    char ch = getchar();

    if (ch>= 'a' && ch<='z')
    {
        if ( ch == 'a' || ch == 'e' || ch == 'i'|| ch == 'o'  || ch == 'u')
        {
            printf("%c is vowel\n", ch);
        }

        else
        {
            printf("%c is Consonant\n",ch);
        }
    }

    else if (ch>='A' && ch<='Z')
    {
        if ( ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' )
        {
            printf("%c is Vowel\n",ch);
        }
        else
        {
            printf("%c is Consonant\n", ch);
        }
    }

    return 0;
}
