#include<stdio.h>
#include<string.h>
void main()
{
	char a[100],b[100];
	int i,n,m,c=0;
	printf("\nEnter the string 1 : ");
	scanf("%s",&a);
	printf("\nEnter the string 2 : ");
	scanf("%s",&b);
	n=strlen(a);
	m=strlen(b);
	if(m!=n)
	{
		printf("\nThey are not equal !!!");
	}
	else
	{
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]<=92)
		{
			a[i]+=32;
		}
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]<=92)
		{
			b[i]+=32;
		}
	}
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==b[i])
		{
			c+=1;
		}
	}
	if(c==n)
	{
		printf("\nThey are equal !!!");
	}
}
}
