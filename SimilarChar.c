#include<stdio.h>
void main()
{
	char a[10],b[10];
	int i,k,e=0;
	printf("\nEnter the first string : ");
	scanf("%s",&a);
	printf("\nEnter the second string : ");
	scanf("%s",&b);
	for(i=0;a[i]!='\0';i++)
	{
		for(k=0;b[k]!='\0';k++)
		{
			if(a[i]==b[k])
			{
				e=1;
				break;
			}
		}
	}
	if(e==1)
	{
		printf("\nYES!!!");
	}
	else if(e==0)
	{
		printf("\nNO!!!");
	}
	
}
