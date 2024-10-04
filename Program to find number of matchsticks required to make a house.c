/****************************************************************
 * Program to find number of matchsticks required to make a house
 * 1 house= 6 matchsticks
 * *************************************************************/
#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number of houses to be made\n");
    scanf("%d",&n);
    int a;
    a=6+(n-1)*5;
    printf("The number of matchsticks required are %d",a);
}