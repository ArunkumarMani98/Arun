#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int n,i,count=0,total;
	printf("\nEnter the sentence : ");
	scanf("%[^\n]%*c",a);
	
	n=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	total=n-count;
	printf("\nThere are %d letters in the sentence.",total);
	return 0;
}
