/*
area = 1/2|x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)|
*/
#include<stdio.h>
#include<math.h>

int main()
{
	int x1,x2,x3,y1,y2,y3;
	double area;
	scanf("%d %d %d %d %d %d",&x1, &y1, &x2, &y2, &x3, &y3); // scanf("%d %d %d %d %d %d ",&x1, &y1, &x2, &y2, &x3, &y3); if any space " " is there , its make a problem
	/*scanf("%d",&x1);
	scanf("%d", &y1);
	scanf("%d",&x2);
	scanf("%d",&y2);
	scanf("%d",&x3);
	scanf("%d",&y3);*/
	
	area = (.5)*fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
	
	printf("%lf",area);
	return 0;
}
