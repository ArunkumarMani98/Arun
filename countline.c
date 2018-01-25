#include <stdio.h>
#include<string.h>
int main(void)
{
    char x[100];
    int n,i,count=0;
	printf("\nEnter the sentence : ");
	scanf("%[^\t]%*c",&x);
	for(i=0;x[i]!='\0';i++)
	{
		if(x[i]=='\n')
		{
			count++;
		}
	}
	printf("\nThere are %d lines in the paragraph.",count);
	return 0;
}
