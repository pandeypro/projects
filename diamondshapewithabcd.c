#include <stdio.h>


int main() {

   int i,j;
   int N;
   printf("enter the size \n");
   scanf("%d",&N);
   int n=N/2;
   for(i=1;i<=n;i++)
   {
       int k=1;
       for(j=1;j<=n;j++)
       {
           if(i+j<=n)
           {
               printf(" ");
           }else
           {
            printf("%c",64+k);
            k++;
           }
           
        }
       
       for(j=n-1;j>=1;j--)
       {
           if(i+j<=n)
           {
               printf(" ");
           }else
           {
            printf("%c",64+k-2);
            k--;
           }
           
        }
        printf("\n");
   }
   for(i=n-1;i>=1;i--)
   {
       int k=1;
       for(j=1;j<=n;j++)
       {
           if(i+j<=n)
           {
               printf(" ");
           }else
           {
            printf("%c",64+k);
            k++;
           }
           
        }
       
       for(j=n-1;j>=1;j--)
       {
           if(i+j<=n)
           {
               printf(" ");
           }else
           {
            printf("%c",64+k-2);
            k--;
           }
           
        }
        printf("\n");
   }
   
    return 0;
}