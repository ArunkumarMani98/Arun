#include<stdio.h>

   int main(){

                int numbr,k,remark,l,r,count=0;

                printf("Enter the initial value \n");
                scanf("%d",&l);
                printf("\nEnter the end value");
                scanf("%d",&r);
                for(numbr=l;numbr<=r;++numbr)

               {

               remark=0;

               for(k=2;k<=numbr/2;k++){

               if((numbr % k) == 0){

               remark++;

               break;

               }

               }

               if(remark==0)
               count++;

              }
              printf("The total prime values are...%d",count);

    return 0;

   }
