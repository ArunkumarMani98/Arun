#include <stdio.h>

int main(void)
{
	int min,hrs,mins;
	printf("\nEnter the time in minutes: ");
	scanf("%d",&min);
	if(min<60)
	{
		printf("\nThe time is 0 hours and %d minutes",min);
	}
	else
	{
		hrs=min/60;
		mins=min%60;
		printf("\nThe time is %d hours and %d minutes",hrs,mins);
	}
	return 0;
}
