#include <stdio.h>

int main(void) 
{
	int n,temp;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	printf("\nThe reverse of  %d is : ",n);
	while(n!=0) 
	{
		temp=n%10;
		if(temp!=0)
		{
			printf("%d",temp);
		}
		n=n/10;
	}
	return 0;
}
