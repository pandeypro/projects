#include<stdio.h>
int main()
{
  int r,i,j,k;
  scanf("%d",&r);
  for(i=1;i<=r;i++) 
  {
     for(j=1;j<=2*r-1;j++) 
     {

            if(i<=(r/2+1))
            {
            if(j>=r+4-2*i && j<=2*i+r-4)
              printf(" ");
            else
              printf("*");
            }
            else
            {
            if(j>=2*i-r+2 && j<=3*r-2-2*i)
               printf(" ");
            else
               printf("*");
            }
          
       }
     printf("\n\n");
   }
   return 0;
}