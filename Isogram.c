#include <stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int n,i,j,m;
	printf("\nEnter the string : ");
	scanf("%s",&a);
	m=strlen(a);
            for(i=0,j=i+1;i<m&&j<m;i++,j++)
	{
		if(a[i]==a[j])
		{
			n+=1;
		}
	}
	if(n==0)
	{
	     printf("\n%s is the Isogram.",a);
	}
	else
	{
		printf("\n%s is not the isogram.",a);
	}
	return 0;
}
