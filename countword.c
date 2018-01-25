#include <stdio.h>
#include<string.h>
int main(void)
{
    char a[100];
    int n,i,count=0;
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
	printf("\nThere are %d words in the sentence.",count+1);
	return 0;
}
