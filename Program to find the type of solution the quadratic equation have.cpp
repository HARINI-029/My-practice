//Program to find the type of solution the quatratic equation have//
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"Enter the value of a,b and c\n";
    int a,b,c;
    cin>>a>>b>>c;
    int d;
    d=sqrt(b*b-4*a*c);
    if(d>0)
    {
        cout<<"Real roots";
    }
    else if(d=0)
    {
        cout<<"Real and equal roots";
    }
    else
    {
        printf("No real roots");
    }
}