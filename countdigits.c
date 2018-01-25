#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(void) 
{
	char a[100];
	int n,i,count=0;
	printf("\nEnter the string: ");
	scanf("%[^\n]%*c",&a);
	for(i=0;a[i]!='\0';i++)
	{
		if(isdigit(a[i]))
		{
			count+=1;
		}
	}
	printf("\nThere a %d digits in the sentence.",count);
	return 0;
}

