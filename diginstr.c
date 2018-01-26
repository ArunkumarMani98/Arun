#include <stdio.h>
#include<string.h>
#include<ctype.h>
int main(void) 
{
	char a[100],b[100];
	int i,k,count=0,j=0;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	k=strlen(a);
	printf("\nThe digits are : ");
	for(i=0;i<k;i++)
	{
		if(isdigit(a[i]))
		{
			b[j]=a[i];
			j++;
		}
	}
	printf("%s",b);
	return 0;
}
