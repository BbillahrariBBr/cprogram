#include<stdio.h>

int main()
{
	int nmbr1, nmbr2, nmbr3;
	scanf("%d %d %d",&nmbr1, &nmbr2, &nmbr3);
	
	if(nmbr1 > nmbr2 && nmbr1 >nmbr3)
		printf("%d is largest", nmbr1);
	else if (nmbr2> nmbr3 && nmbr2 > nmbr1)
		printf("%d is largest", nmbr2);
	else 
		printf("%d is largest", nmbr3);
	return 0;
}
