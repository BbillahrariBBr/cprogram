// multiplication table 1 to 20
#include<stdio.h>

int main()
{
    int n=1;
    int i = 1;
    int sum = 0;
    while(n<=20)
    {
        printf("Multiplication table of %d\n",n);
        printf("--------------------------\n");
        while(i<=10)
        {
            sum  = sum+n;
         if (i<10)
            printf("%d x %d  = %d\n",n,i,sum);
        else
        {
             printf("%d x %d = %d\n",n,i, sum);
        }
         i = i+1;
        }
        n = n+1;
        printf("\n\n");
        i =1;
        sum = 0;
    }

    return 0;
}
