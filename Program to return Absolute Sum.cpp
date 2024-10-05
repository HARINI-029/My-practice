// Program to return Absolute Sum//
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a[5]={-3,1,6,4,-7},sum;
    int i;
    for(i=0;i<5;i++)
    {
        sum=sum+abs(a[i]);
    }
    cout<<sum;
}