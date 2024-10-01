/**************************************************************
 * Two Makes Ten:
 * TRUE if sum of two number =10 or any one of the number is 10
 *************************************************************/
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter a number\n");
    scanf("%d",&a);
    scanf("%d",&b);
    if(a==10||b==10)
    {
        printf("TRUE");
    }
    else if(a+b==10)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("false");
    }
}
   