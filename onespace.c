#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[100],b[100];
	int n,m,i;
	printf("\nEnter the string (with space) : ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			m=i;
			break;
		}
	}
	for(i=0;i<=m;i++)
	{
		b[i]=a[i];
	}
	n=m+1;
	for(i=m+1;a[i]!='\0';i++)
	{
		if(a[i]!=' ')
		{
			b[n]=a[i];
			n++;
		}
	}
  printf("\nAfter removing spaces : ");
	for(i=0;b[i]!='\0';i++)
	{
		printf("%c",b[i]);
	}
	return 0;
}
