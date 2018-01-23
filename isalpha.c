#include <stdio.h>
#include<ctype.h>
int main(void)
{
	char str;
	printf("\nEnter the character :");
	scanf("%c",&str);
	if(isalpha(str))
	{
		printf("%c is a alphabet",str);
	}
	else
	{
		printf("%c is not a alphabet",str);
	}
	return 0;
}
 
