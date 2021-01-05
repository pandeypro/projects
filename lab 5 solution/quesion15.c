#include<stdio.h>
int main()
{
  int r,i,j,k;
  scanf("%d",&r);
  for(i=1;i<=r;i++)
   {
   	k=65;
     for(j=1;j<=2*r-1;j++)
      {
        if(j<=r+1-i || j>=r-1+i)
          { 
           if (j<=(2*r-1)/2)
              printf("%c",k++);
           else if (j==r)
              printf("%c",k);
           else if (j>(2*r-1)/2)
           printf("%c",--k);
           }
           
        else
           printf(" ");
      }
     printf("\n");
   }
   return 0;
}