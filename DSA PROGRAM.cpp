/******************************
First DSA Program:
*5 methods to initialise array
****************************/

#include<iostream>
using namespace std;
int main()
{
    int a[3]={1,2,3}; //1-method
    int b[]={1,2,3,4};//2-method[without mentioning the size of array]
    int c[3];//3-method[input from user]
    cout<<"Enter the array values\n";
    for(int i=0;i<3;i++)
    {
        cin>>c[i];
    }
     for(int i=0;i<3;i++)
    {
        cout<<c[i]<<"\t";
    }
    cout<<"\n";
    int d[5]={3,4};//4-method[size>values]
    int e[3]={0};//5-method[0 is initialised to all index]
     for(int i=0;i<3;i++)
    {
        cout<<e[i]<<"\t";
    }
}