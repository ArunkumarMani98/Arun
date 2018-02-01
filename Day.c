#include <stdio.h>

int main(void)
{
	char a[100]="sunday",b[100],c[100]="saturday";
	int i,c3=0,c1,c2=0;
	printf("\nEnter the day..");
	scanf("%s",&b);
	c1=strlen(b);
	for(i=0;b[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
			if(i==0)
			{
				c3++;
				c2++;
			}
			else
			{
				c3++;
			}
		}
		else if(c[i]==b[i])
		{
			c2++;
		}
	}
	if(c3==c1||c2==c1)
	{
		printf("\n%s is a Holiday",b);
	}
	else
	{
		printf("\n%s is a working day",b);
	}
	return 0;
}
