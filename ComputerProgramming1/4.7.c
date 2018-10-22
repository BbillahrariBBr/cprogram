// multiplication table using for

#include<stdio.h>

int main()
{
    int n ;
    int i =1;
    scanf("%d",&n);
    for(i; i<=10; i++)
    {

        if (i<10)
            printf("%d x %d  = %d\n",n,i,n*i);
        else
            printf("%d x %d = %d\n",n,i,n*i);
    }

    return 0;
}
