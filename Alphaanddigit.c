#include <stdio.h>
#include<ctype.h>
int main(void) 
{
	char a[100],i,count=0,count1=0,coun=0;
	printf("\nEnter the string: ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(isalpha(a[i]))
		{
			count=1;
		}
		else if(isdigit(a[i]))
		{
			count1=1;
		}
		else
		{
			coun=1;
		}
	}
	if(count==1&&count1==1)
	{
		printf("\n%s consists of both alphabets and digits.",a);
	}
	else if(count==1&&count1==0)
	{
		printf("\n%s consists of only alphabets. ",a);
	}
	else if(count==0&&count1==1)
	{
		printf("\n%s consists of only digits.");
	}
	else
	{
		printf("\n%s has no alphabets and digits");
	}
	return 0;
}
