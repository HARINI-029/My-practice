/*****************************************
  Odd Up, Even Down — N Times
 * Adds two (+2) to each odd integer.
 *Subtracts two (-2) from each even integer.
 * ****************************************/

#include<iostream>
using namespace std;
int main()
{
    int a[3],i,b,count=0,j,c[count];
    cout<<"Enter 3 elements to the array\n";
    for(i=0;i<3;i++)
    {
        cin>>a[i];
    }
  
    
        for(i=0;i<3;i++)
        {
            if(a[i]%2==0)
            {
               b=a[i]-(2*3);
               c[count]=b;
               count++;
                
            }
            else
            {
               b=a[i]+(2*3) ;
               c[count]=b;
               count++;
            }
            
        }
        for(i=0;i<count;i++)
        {
            cout<<c[i]<<"\t";
        }
        
       
    
    
}