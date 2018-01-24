#include <stdio.h>

int main(void)
{
	int min,hrs,mins,hr,dhr,dmin;
	printf("\nEnter the first time: ");
	scanf("%d",&hr);
	scanf("%d",&min);
	printf("\nEnter the second time: ");
	scanf("%d",&hrs);
	scanf("%d",&mins);
	if(hrs>hr)
	{
		dhr=hrs-hr;
		printf("\nThe difference is %d hours ans %d minutes",dhr,dmin);
	}
	else
	{
		dhr=hr-hrs;
		dmin=min-mins;
		printf("\nThe difference is %d hours and %d minutes",dhr,dmin);
	}
	return 0;
}
