#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int n,i,count=0;
	printf("\nEnter the sentence : ");
	scanf("%[^\n]%*c",a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("\nThere are %d blank spaces in the sentence.",count);
	return 0;
}
