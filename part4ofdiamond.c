#include <stdio.h>

int main()
{
int i,j;
int n;
printf("enter the size \n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    for(j=n+1-i;j>=1;j--)
    {
        printf("%c",j+64);
    }
    printf("\n");
}

    return 0;
}