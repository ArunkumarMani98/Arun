#include <stdio.h>
#include<ctype.h>
int main(void)
{
	char a[100],b[100];
	int i,c=0,k;
	printf("\nEnter the first string : ");
	scanf("%s",&a);
	printf("\nEnter the second string : ");
	scanf("%s",&b);
	printf("\nEnter the changes : ");
	scanf("%d",&k);
	for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
	{
		if((int)a[i]!=(int)b[i])
		{
			c=c+1;
		}
	}
	if(c==k)
	{
		printf("\nYES!!!");
	}
	else
	{
		printf("\nNO!!!");
	}
	return 0;
}
