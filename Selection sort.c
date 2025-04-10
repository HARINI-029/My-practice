/******************************************************************************

SELECTION SORT

*******************************************************************************/
#include <stdio.h>

int main()
{
 int a[5]={3,4,1,5,6};
 int min,i,j,n=5,temp;
 for(i=0;i<n;i++)
 {
     min=i;//Assuming first element is always small
     for(j=i+ 1;j<n;j++)// since assumed first as small starting from next index
     {
         if(a[j]<a[min])
         {
             min=j;//stores minimum elemnet in array
         }
         
     }
     if(min!=i)//since we have assumed first element as minimum if not true then 
     //swapping is done
     {
         temp=a[i];
         a[i]=a[min];
         a[min]=temp;
     }
 }
 for(i=0;i<n;i++)
 {
     printf("%d ",a[i]);
 }
}
