#include <stdio.h>
int main(void)
{
	int c=4,i;
	char a[100];
	printf("\nEnter the string : ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='L')
		{
			c--;
		}
		else if(a[i]=='R')
		{
			c++;
		}
	}
	if(c==0||c==8)
	{
		printf("\nYES");
	}
	else
	{
		printf("\nNO");
	}
	return 0;
}
