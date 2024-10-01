//PROGRAM TO PLACE THE SMALLEST NUMBER TO THE END//
#include<iostream>
using namespace std;
int main()
{
    int a[5]={7,4,8,5,3};
    int i,j;
   
    
        for(j=0;j<4;j++)
        {
            if(a[j]<a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }
        
    
    for(j=0;j<5;j++)
    {
        cout<<a[j]<<"\t";
    }
}