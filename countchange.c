#include <stdio.h>
int main(void)
{
	char a[100],b[100],i,c=0;
	printf("\nEnter the first string : ");
	scanf("%s",&a);
	printf("\nEnter the second string : ");
	scanf("%s",&b);
	for(i=0;a[i]!='\0';i++)
	{
		if((int)a[i]!=(int)b[i])
		{
			c=c+1;
		}
	}
	printf("\nThere are %d changes.",c);
	return 0;
}
