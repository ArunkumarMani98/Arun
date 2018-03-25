#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char a[100][100];
    int n,i=0,sum=0,c=0,s=0,b[100],j=0,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<strlen(a[i]);j++)
        {
            s=(int)a[i][j]-97;
            sum=sum+s;
        }
        b[k]=sum;
        k++;
        sum=0;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(b[i]==b[j])
            {
                c=c+1;
            }
        }
    }
    printf("%d",c);
}
