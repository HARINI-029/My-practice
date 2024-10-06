//Program to eliminate odd numbers//  
#include<iostream>
using namespace std;
int main()
{
    int a[6],b[6];
int i,count=0;
cout<<"Enter 6 numbers in the array\n";
for(i=0;i<6;i++)
{
    cin>>a[i];
}
for(i=0;i<6;i++)
{
    if(a[i]%2==0)
    {
      b[count]=a[i];
      count++;
    }
    
}
for(i=0;i<count;i++)
{
    cout<<b[i]<<"\t";
}

}