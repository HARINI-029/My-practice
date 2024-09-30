/**********************************************************************
 * Program to calculate the table topper based on individual team score
wins get 3 points
draws get 1 point
losses get 0 points
*******************************************************************/
#include<stdio.h>
void main()
{
   int t,w,d,l;
    printf("Enter the number of wins,draw and loses of team A \n");
    printf("Assume each team played only 5 matches in total\n");
    scanf("%d",&w);
    scanf("%d",&d);
    scanf("%d",&l);
   
    t=w*3+d+l; 
    
     int t1,w1,d1,l1;
    printf("Enter the number of wins,draw and loses of  team B\n");
    scanf("%d",&w1);
    scanf("%d",&d1);
    scanf("%d",&l1);
  
    t1=w1*3+d1+l1;
    
    
    int t2,w2,d2,l2;
    printf("Enter the number of wins,draw and loses of  team C\n");
    scanf("%d",&w2);
    scanf("%d",&d2);
    scanf("%d",&l2);
    
    t2=w2*3+d2+l2;
    
    if(t>t1&& t>t2)
    {
        printf("TEAM A is at the top and leading!!\n");
        printf("The score of team A is %d",t);
    } 
     else if(t1>t&& t1>t2)
    {
        printf("Team B is at the top and leading!!\n");
        printf("The score of team B is %d",t1);
    }
    else
    {
       printf("Team C is at the top and leading!!\n");
        printf("The score of team C is %d",t2); 
    }
    
}
