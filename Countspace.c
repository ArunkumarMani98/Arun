#include <stdio.h>
#include<string.h>
int main(void)
{
    char str[100];
    int n,i,count=0;
	printf("\nEnter the sentence : ");
	scanf("%[^\n]%*c",str);
	for(i=0;a[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("\nThere are %d blank spaces in the sentence.",count);
	return 0;
}
