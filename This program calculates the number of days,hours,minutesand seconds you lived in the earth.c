//This program calculates the number of days,hours,minutesand seconds you lived in the earth//
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the age\n");
    scanf("%d",&n);
    int a;
    a=365*n;
    int b;
    b=24*a;
    int c;
    c=60*b;
    int d;
    d=c*60;
    printf("The number of days you lived is %d\n",a);
    printf("The number of hours you lived is %d\n",b);
     printf("The number of minutes you lived is %d\n",c);
     printf("The number of seconds you lived is %d\n",d);
    
}