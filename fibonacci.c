#include <stdio.h>

int main(void) 
{
	int a=0,b=1,c,count=0,limit;
	printf("\nEnter the limit upto the Fibanocci series is printed: ");
	scanf("%d",&limit);
	printf("\nThe fibonacci series is : %d \n %d",a,b);
	while(count<limit)
	{
		c=a+b;
		count++;
		printf("\n%d",c);
		a=b;
		b=c;
	}
	return 0;
}
