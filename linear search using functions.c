/******************************************************************************

          LINEAR SEARCH USING FUNCTION

*******************************************************************************/

#include <stdio.h>
int search(int n,int key,int a[]);
int main()
{
    int n,key;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the array elements\n");
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search\n");
    scanf("%d",&key);
    search(n,key,a);
    
}
int search(int n,int key,int a[])
{
    int i,flag=0;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            printf("element found at %d",i+ 1);
        }
      
    }
    if(flag==0)
    {
        printf("Element not found");
    }
}
