#include <stdio.h>

int main(void)
{
	int i,num,flag=0;
	printf("\nEnter the number: ");
	scanf("%d",&num);
	for(i=2;i<=num/2;i++)
	{
		if(num%i==0)
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		printf("\n%d is a composite number",num);
	}
	else
	{
		printf("\n%d is not a composite number",num);
	}
	return 0;
}
