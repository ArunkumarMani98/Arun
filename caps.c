#include <stdio.h>
int main(void)
{
	int b[100],n=0,i;
	char a[100];
	printf("\nEnter the string : ");
	scanf("%s",&a);
	for(i=0;a[i]!='\0';i++)
	{
		b[n]=(int)a[i];
		n++;
	}
	printf("\nThe converted string is : ");
	for(i=0;i<n;i++)
	{
		if(b[i]>=97&&b[i]<=122)
		{
			b[i]=b[i]-32;
		}
		else if(b[i]>=65&&b[i]<=90)
		{
			b[i]=b[i]+32;
		}
		printf("%c",b[i]);
	}
	return 0;
}
