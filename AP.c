#include <stdio.h>

int main(void)
{
	int a1,b1,i,sum=0,d;
	printf("\nEnter the initial value: ");
	scanf("%d",&a1);
	printf("\nEnter the difference: ");
	scanf("%d",&d);
	printf("\nEnter the end value: ");
	scanf("%d",&b1);
	for(i=a1;i<=b1;i=i+d)
	{
		sum+=i;
	}
	printf("\n%d\n",sum);
	return 0;
}
