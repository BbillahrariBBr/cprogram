/**
circle  perimeter  P = 2*pi*r

 pi = acos(-1);
*/
#include<stdio.h>
#include<math.h>

int main()
{
    double pi , r, p;
    pi = acos(-1);
    scanf("%lf",&r);
    p = 2*pi*r;
    printf("%lf",p);

    return 0;
}
