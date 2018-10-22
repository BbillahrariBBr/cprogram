// Multiplication table using while

#include<stdio.h>

int main()
{
    int n;
    int i =1;
    scanf("%d",&n);

    while(i<=10)
    {
        if (i<10)
            printf("%d x %d  = %d\n",n,i,n*i);

        else
            printf("%d x %d = %d\n",n,i,n*i);

        i = i+1;
    }

    return 0;
}
