#include<stdio.h>

int main()
{
	int nmbr1, nmbr2, nmbr3;
	int frst, secnd, last;
	
	scanf("%d %d %d", &nmbr1, &nmbr2, &nmbr3);
	
	if(nmbr1 >nmbr2  && nmbr1> nmbr3 )
	{
		frst = nmbr1;
		
		if(nmbr2> nmbr3)
		{
			secnd = nmbr2;
			last = nmbr3;
		}
		else
		{
			secnd = nmbr3;
			last = nmbr2;
			
		}
		
		printf("%d %d %d", frst, secnd, last);
	}
	
	else if(nmbr2 >nmbr1  && nmbr2> nmbr3 )
	{
		frst = nmbr2;
		
		if(nmbr1> nmbr3)
		{
			secnd = nmbr1;
			last = nmbr3;
		}
		else
		{
			secnd = nmbr3;
			last = nmbr1;
			
		}
		
		printf("%d %d %d", frst, secnd, last);
	}
	
	
	else
	{
		frst = nmbr3;
		
		if(nmbr1> nmbr2)
		{
			secnd = nmbr1;
			last = nmbr2;
		}
		else
		{
			secnd = nmbr2;
			last = nmbr1;
			
		}
		
		printf("%d %d %d", frst, secnd, last);
	}
	
	
	
	
	return 0;
}
