#include <stdio.h>

int main(void) 
{
	int n,temp;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	printf("\nThe odd digits in %d are : ",n);
	while(n!=0) 
	{
		temp=n%10;
		if(temp!=0&&(temp%2)!=0)
		{
			printf("\t%d\t",temp);
		}
		n=n/10;
	}
	return 0;
}
