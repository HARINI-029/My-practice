//Program to find the sum of N natural numbers using do-while:
#include<stdio.h>
int  main()
{
    int sum=0,i=1,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    do
    {
        sum=sum+i; 
        i++;
    }while(i<=n);
    printf("The sum is: %d",sum);
    return 0;
}