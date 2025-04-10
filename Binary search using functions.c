#include<stdio.h>
int search(int a[],int n,int key);
int main()
{
 int n, key;
    printf("Enter the size of array\n");
    scanf("%d", &n);
    
    printf("Enter the array elements\n");
    int i, a[n];
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]); 
    }
    
    printf("Enter the element to search\n");
    scanf("%d", &key);
    search(a,n,key);

}
int search(int a[],int n,int key)
{
    int mid,low=0,high=n- 1,pos=0;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key)
        {
            pos=mid;
            break;
        }
        else if(key<a[mid])
        {
            high=mid- 1;
        }
        else
        low=mid+ 1;
    }
    if(pos==0)
    {
       printf("Element not found\n"); 
    }
    else
    {
        printf("Element found at %d",mid+ 1);
    }
}
