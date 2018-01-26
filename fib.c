#include <stdio.h>

int main(void) 
{
	int a=0,b=1,fib,count=0,limit;
	printf("\nEnter the limit upto the Fibanocci series is printed: ");
	scanf("%d",&limit);
	printf("\nThe fibonacci series is : %d \n %d",a,b);
	while(count<limit-2)
	{
		fib=a+b;
		count++;
		printf("\n%d",fib);
		a=b;
		b=fib;
	}
	return 0;
}
