// multiplication table using for and break


#include<stdio.h>

int main()
{
    int n ;
    int i =1;
    scanf("%d", &n);

    for( ; ;)
    {
         if (i<10)
            printf("%d x %d  = %d\n",n,i,n*i);
        else
        {
             printf("%d x %d = %d\n",n,i,n*i);
             break;
        }
         i = i+1;

    }


    return 0;
}
