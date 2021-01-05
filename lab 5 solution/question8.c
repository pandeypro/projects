#include <stdio.h>
void main()
{
    int n;
    int i, j;
    printf("enter the size \n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j == n + i || j == n - i)
            {
                printf("%d", i + 1);
            }
            else
            {
                printf(" ");
            }
           
        }
         printf("\n");
    }
    for (i = n - 2; i >= 0; i--)
    {
        for (j = 1; j <= 2 * n - 1; j++)
        {
            if (j == n + i || j == n - i)
            {
                printf("%d", i + 1);
            }
            else
            {
                printf(" ");
            }
           
        }
         printf("\n");
    }
}