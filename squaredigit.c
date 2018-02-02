#include<stdio.h>
int main()
{
	int sum=0,n,temp;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	while(n!=0)
	{
		temp=n%10;
		sum=sum+(temp*temp);
		n=n/10;
	}
	printf("\nThe square of the digit is %d",sum);
	return 0;
}
