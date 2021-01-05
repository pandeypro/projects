#include <stdio.h>
void main()
{
    int n;
    int i,j;
    printf("enter the size \n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1||j==1||i==n||j==n)
            printf("1");
            else
            {
                printf("0");
            }

            
        }
        printf("\n");
    }
}