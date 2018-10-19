/*
s = (a+b+c)/2 where s = semi perimeter
area = sqrt(s*(s-a)*(s-b)*(s-c)) this is Heron's Formula
*/

#include<stdio.h>
#include<math.h>
int main()
{
    double a ,  b, c, s , area;
    scanf("%lf %lf %lf", &a, &b , &c);
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%lf",area);
    return 0;
}
