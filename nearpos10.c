#include <stdio.h>

int main() 
{
	int n,m,m1;
	printf("\nEnter the number");
	scanf("%d",&n);
	if(n<=10)
	{
		printf("10");
	}
	else
	{
		m=n/10;
		m1=(m+1)*10;
	}
    printf("%d",m1);
	return 0;
}
