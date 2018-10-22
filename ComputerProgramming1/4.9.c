// multiplication table using addition method

#include<stdio.h>

int main()
{
    int n;
    int i =1;
    int result =0;
    scanf("%d", &n);

for(i ;i<=10 ;i++)
    {
        result = result+n; // here we use addition method  i*n replace by result +n
         if (i<10)
            printf("%d x %d  = %d\n",n,i,result);
        else
        {
             printf("%d x %d = %d\n",n,i, result);
             //break;
        }
         //i = i+1;

    }
    return 0;
}
