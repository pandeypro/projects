#include <stdio.h>
void main()
{
    int n;
    int i,j;
    int a=2;
    printf("enter the size \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i==j||i+j==2*n)
            printf("%d",i);
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(i==j||i+j==2*n)
            printf("%d",i);
            else 
            printf(" ");
        }
        a=a+2;
        printf("\n");
    }
}