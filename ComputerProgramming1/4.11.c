//permutation for 1 2 3

#include<stdio.h>

int main()
{
    int a,b,c;
    for(a = 1; a<=3; a++)
    {
        for(b =1; b<=3; b++)
        {
            for(c =1; c<=3; c++)
            {
                printf("%d\t%d\t%d\n",a,b,c );
            }
        }
    }

    return 0;
}
