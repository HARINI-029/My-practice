// Program to find if a given number is power of 2//
#include<stdio.h>
#include<math.h>
void main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int a, i=0,c=0;
    while(i<=n)
    {
        a=pow(2,i);
        if(a==n)
        {
           c=1;
        
        }
       
        i++;
        
       
    }
    if(c==1)
    {
        printf("power");
    }
    else
    {
        printf("no power");
    }
}

    
