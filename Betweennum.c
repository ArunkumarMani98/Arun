#include <stdio.h>

int main(void)
{
	int num,a,z;
	printf("\nEnter the initial value: ");
	scanf("%d",&a);
	printf("\nEnter the end value: ");
	scanf("%d",&z);
	printf("\nEnter the number: ");
	scanf("%d",&num);
	if(num>=a&&num<=z)
	{
		printf("\n%d is between %d and %d.",num,a,z);
	}
	else
	{
		printf("\n%d is not between %d and %d.",num,a,z);
	}
	return 0;
}
