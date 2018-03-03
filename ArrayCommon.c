#include<stdio.h>
void main()
{
	int n,a[100],i,b[100],j,c=0,d[100],k=0,count=0;
	printf("\nEnter the number : ");
	scanf("%d",&n);
	printf("\nEnter the first array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the second array elements : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	printf("\nThe Common element is : ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				d[k]=a[i];
				k++;
				c=1;
			}
		}
	}
	if(c==0)
	{
		printf("\nNo common elements!!!");
	}
	else if (c==1)
	{
		for(i=0;i<n;i++)
        	{
        		for(j=0;j<count;j++)
      				{
         				if(a[i]==b[j])
           				 break;
     				 }
     				 if(d==count)
    		 			 {
       						  b[count] = a[c];
       			  			  count++;
    					  }
  		 }
	}
}
