#include <stdio.h>

int main(void)
{
	int n,i,j,flag=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	for(i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			flag=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					flag=1;
				}
			}
			if(flag==0)
			{
				printf("%d\t",i);
			}
		}
	}
	return 0;
}
