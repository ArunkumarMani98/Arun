#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(void)
{
    char str[100];
    int n,i,count=0,tot=0;
	printf("\nEnter the sentence : ");
	scanf("%[^\n]%*c",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(isalpha(str[i])||isdigit(str[i]))
		{
			count++;
		}
		else
		{
			tot++;
		}
	}
	printf("\nThere are %d special characters in the sentence.",tot);
	return 0;
}
