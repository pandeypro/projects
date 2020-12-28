#include <stdio.h>

int main()
{
int i,j,k;
int n;
printf("enter the size \n");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("%c",k+64);
    }
    printf("\n");
}


    
    return 0;
}