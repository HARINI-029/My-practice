//Binary Search//
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of array\n";
    cin>>n;
    int a[n];
    int i,j;
    cout<<"Enter the array elements\n";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    
    
    
    int num;
    cout<<"Enter the number to search\n";
    cin>>num;
   
    
        int mid;
        int start=0,end=n-1;
        while(start<=end)
        {
        mid=(start+end)/2;
        if(a[mid]==num)
        {
            cout<<"The index of given element is: "<<mid;
            break;
        }
        else if (a[mid]<num)
        {
         start=mid + 1;   
        }
        else
        {
            end=mid-1;
        }
        
    }
    if(start>end)
    {
        cout<<"not found";
    }
    
   
    }
    
    
