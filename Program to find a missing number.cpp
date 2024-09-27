//Program to find a missing number [the elements do not repeat and always ordered,i.e here 1 to 6]
#include<iostream>
using namespace std;
int main()
{
    int a[]={1,2,4,5,6};
    int c;
    int j=1;
    for(int i=0;i<5;i++)
    {
        if(a[i]==j){
            j++;
        }
        else
        {
           c=j;
           break;
        }
        
    
    }
    cout<<c;
}