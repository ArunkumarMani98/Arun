#include <stdio.h>
int main(void)
{
	int a[100],j,temp,n,i,b[100],count=0;
	printf("\nEnter the size of the array: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			count+=1;
		}
	}
	if(count==n)
	{
		printf("\nThe given array is already soretd.");
	}
	else
	{
		printf("\nThe given array is not soretd.");
	}
	return 0;
}
