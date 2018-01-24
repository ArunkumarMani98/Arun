#include <stdio.h>
#include<ctype.h>

int main(void)
{
	char a;
	printf("\nEnter the character: ");
	scanf("%c",&a);
	if(a>='0'&&a<='9')
	{
		printf("\nYES");
	}
	else
	{
		printf("\nNO!!!");
	}
	return 0;
}
