#include<stdio.h>
// both double and float print the value before decimal 6 digit
int main()
{
    float sum1;
    double a, b, sum;

    a = 9.5;
    b = 8.743;

    sum = a+b;
    sum1 = a+b;

    printf("Sum is: %lf\n", sum);  // for double

    printf("Sum is: %0.2lf\n ", sum);  // for double .00 value

    printf("Sum is: %f\n ", sum);  //for float

    return 0;
}
