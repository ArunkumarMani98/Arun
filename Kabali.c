#include<stdio.h>
#include<string.h>>
void main()
{
	char a[10]="kabali",b[100][100];
	int i,j,n,m,k,s[100],t,s1[100],g,h,w=0,q=0;
	printf("\nEnter the number of strings : ");
	scanf("%d",&n);
	printf("\nEnter the strings : ");
	for(i=0;i<n;i++)
	{
		scanf("%s",&b[i]);
	}
	k=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		m=(int)a[i];
		s[i]=m;
		
	}
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
			if(s[i]>s[j])
			{
				t=s[i];
				s[i]=s[j];
				s[j]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		w=0;
		if(k==strlen(b[i]))
		{
			for(j=0;b[i][j]!='\0';j++)
			{
			m=(int)b[i][j];
			s1[j]=m;
			}
		}
		for(g=0;g<k;g++)
		{
		for(h=g+1;h<k;h++)
			{
			if(s1[g]>s1[h])
				{
				t=s1[g];
				s1[g]=s1[h];
				s1[h]=t;
				}
			}
		}
		for(g=0;g<k;g++)
			{
			if(s[g]==s1[g])
				{
					w=w+1;
				}
			}
		if(k==w)
		{
			q=q+1;
		}
	}
	printf("\nThere are %d strings similar to %s.",q,a);
}
