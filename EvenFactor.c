#include<stdio.h>
int main()
{
    int n,i;
    printf("\nEnter the number : ");
    scanf("%d",&n);
    printf("\nThe even factors of %d is : ",n);
    for(i=2;i<=n;i=i+2)
    {
        if(n%i==0)
        {
            printf("\n%d",i);
        }
    }
   return 0;
}
