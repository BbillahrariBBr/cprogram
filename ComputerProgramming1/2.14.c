#include<stdio.h>

int main()
{
    double num1, num2;
     char add ='+', sub = '-' , mul = '*', div = '/';

    printf("Please enter a number: ");
    scanf("%lf",&num1);

    printf("Please enter a another number: ");
    scanf("%lf", &num2);

    printf("%lf %c %lf = %lf \n", num1,add, num2, num1+num2);
    printf("%lf %c %lf = %lf \n", num1, sub ,num2, num1-num2);
    printf("%lf %c %lf = %lf \n", num1, mul, num2, num1*num2);
    printf("%lf %c %lf = %lf \n", num1, div, num2, num1/num2);

    return 0;
}
