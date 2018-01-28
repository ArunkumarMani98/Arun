#include <stdio.h>
int main(void)
{
	int c=0,j=1,check=0,i;
	char a[100];
	printf("\nEnter the string : ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='L')
		{
			c--;
			if(c==0||c==4||c==-4)
			{
				printf("\n%d rotations completed.",j);
				j++;
				c=0;
				check++;
			}
		}
		else if(a[i]=='R')
		{
			c++;
			if(c==0||c==4||c==-4)
			{
				printf("\n%d rotations completed.",j);
				j++;
				c=0;
				check++;
			}
		}
	}
	if(check>0)
	{
		printf("\nYES");
	}
	else
	{
		printf("\nNO");
	}
	return 0;
}
