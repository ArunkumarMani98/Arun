#include <stdio.h>

int main(void)
{
	int a[100],min,i;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
	for(i=0;i<10;i++)
	{
		if(a[i]<min)
		{
			min=a[i];
		}
	}
	printf("\nThe minimum element is %d ",min);
	return 0;
}
