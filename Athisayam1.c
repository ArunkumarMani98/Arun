#include <stdio.h>
#include <string.h>
#include<ctype.h>
int main ()
{
    char *array[50],*p;
    char plus='+',minus='-',product='*',divide='/',modulo='%';
    char buf[1000];
    int i=0,j=0,g=0,q,temp[100];
    printf("\nEnter the combination of numbers and operators : ");
    scanf("%[^\t]%*s",&buf);
    p=strtok(buf," \n");
    while(p!=NULL)
    {
        array[i++]=p;
        j++;
        p=strtok (NULL," \n");
    }
    q=0;
   for(i=0;i<j;i++) 
    {
     if(*array[i]==plus)
     {
    	temp[q]=(atoi(array[i-1]))+(atoi(array[i+1]));
    	q++;
     }
     else if(*array[i]==minus)
     {
    	temp[q]=(atoi(array[i-1]))-(atoi(array[i+1]));
    	q++;
     }
     else if(*array[i]==product)
     {
    	temp[q]=(atoi(array[i-1]))*(atoi(array[i+1]));
    	q++;
     }
     else if(*array[i]==divide)
     {
    	temp[q]=(atoi(array[i-1]))/(atoi(array[i+1]));
    	q++;
     }
     else if(*array[i]==modulo)
     {
    	temp[q]=(atoi(array[i-1]))%(atoi(array[i+1]));
    	q++;
     }
    }
    for(i=0;i<q;i++)
    {
    	printf("\n%d",temp[i]);
    }
    return 0;
}
