//Program to find 1st and last occurrence of an element in an array
#include<iostream>
using namespace std;
int main()
{
    int a[5]={1,2,3,4,4};
    int i,num=4;
    int count=1;
  
    for(i=0;i<5;i++)
    {
        if(a[i]==num)
        {
        cout << "The " << count << "th occurrence of the element is: " << i << endl;
        count++;
    }
   
    }
    
}