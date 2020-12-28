#include <stdio.h>

int main()
{
int i,j,k;
int a=0;
int n;
printf("enter the size \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=1;j<i;j++)
    {
         printf(" ");
    }
    
    for(k=1;k<=n-i+1;k++)
    {
        printf("%c",k+64);
       
    }
    printf(" \n ");
    
}    



    
    return 0;
}