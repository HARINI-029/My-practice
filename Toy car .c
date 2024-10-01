/****************************************
 * TOY CAR WORKSHOP:
 * Calculates the number of toy cars could be made from given data
 * ***************************************/
#include<stdio.h>
void main()
{
    int w,b,p;
    printf(" Enter the number of car wheels,car body and people\n");
    scanf("%d",&w);
    scanf("%d",&b);
    scanf("%d",&p);
    int tc=w/4;
    if(b<tc)
    {
        tc=b;
        
    }
     if(p/2<tc)
    {
        tc=p/2;
    }
    printf("THE TOTAL NUMBER OF TOY CARS COULD BE MADE IS: %d",tc);
}
