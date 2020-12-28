#include <stdio.h>

void main()
{
  int i,j;
  int t,n;
  int c=0;
  printf("enter no.of test cases \n");
  scanf("%d",&t);
  for(i=1;i<=t;i++)
  {
      printf("enter the number \n");
      scanf("%d",&n);
      for(j=1;j<=n;j++)
      {
          if(n%j==0)
          c++;
      }
      if(c==2)
      printf("prime \n");
      else
      printf("not prime \n");
      
  }



    
    
}