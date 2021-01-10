#include <stdio.h>
#include <math.h>
int BtoD();
int DtoB();
int DtoH();
int HtoD();
int DtoO();
int OtoD();
int num;
int a,j;
char b[10];
int sum = 0;
int i=0;
int digit=0;

void main()
{
    int n;
    printf("chose 1-BtoD-----\n");
    printf("chose 2-DtoB-----\n");
    printf("chose 3-DtoH\n");
    printf("chose 4-HtoD-----\n");
    printf("chose 5-DtoO\n");
    printf("chose 6-OtoD------\n");
    scanf("%d", &n);
    switch (n)
    {
        case 1:BtoD();
               break;
        case 2:DtoB();
               break;
        case 3:DtoH();
               break;
        case 4:HtoD();
               break;              
        case 5:DtoO();
               break;
        case 6:OtoD();
               break;
        default: printf("wrong choice");
                 break;                    
    }
}
int BtoD()
{
    printf("enter the num\n");
    scanf("%d", &num);
    while (num > 0)
    {
        a = num % 10;
        sum = sum + a * pow(2, i);
        num=num/10;
        i++;
    }
    printf("%d", sum);
    return 0;
}
int DtoB()
{
    printf("enter the num\n");
    scanf("%d", &num);
    while (num > 0)
    {
        b[i] = num % 2;
        num = num / 2;
        i++;
    }
    //b[i-1]=1;
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", b[j]);
    }
    return 0;
}
int DtoH()
{
    i=0;
    a=0;
    printf("enter the num\n");
    scanf("%d", &num);
    while (num!=0)
    {
        
        
        a=num % 16;
        if (a<10)
        {
           a = a+48;
        }
        else
        {
           a=a+55;
        }
        b[i]=a;
        i++;
        num = num / 16;
    }
    for (j= i; j>=0; j--)
    {
        printf("%c", b[j-1]);
    }
    return 0;
}
int HtoD()
{
    printf("enter the no. of digits");
    scanf("%d",&digit);
    for(j=0;j<digit-1;j++)
    {
        printf("enter the number");
        scanf("%X",&b[j]);
    }
    
    for(j=digit;j>=0;j--)
    { 
        i=0;
        a = b[digit-1];
        sum = sum + a * (pow(16, i));
        
        i++;
        digit--;
    }
    printf("%d", sum);
    return 0;
}
int DtoO()
{
    printf("enter the num\n");
    scanf("%d", &num);
    while (num > 0)
    {
        b[i] = num % 8;
        num = num / 8;
        i++;
    }
    for (j = i - 1; j >= 0; j--)
    {
        printf("%d", b[j]);
    }
    return 0;
}
int OtoD()
{
    printf("enter the num\n");
    scanf("%O", &num);
    while (num > 0)
    {
        a = num % 8;
        sum = sum + a * pow(8, i);
        num=num/8;
        i++;
    }
    printf("%d", sum);
    return 0;
}