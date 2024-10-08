//Program to calculate the number of alphabets and digits//
#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;
int main()
{
    string a;
    int count,count1;
    cout<<"Enter anything\n";
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        if(isdigit(a[i]))
        {
           count++; 
        }
        else if(isalpha(a[i]))
        {
            count1++;
        }
    }
    cout<<"The the number of digits are:\n"<<count<<"\n"<<"The number of alphabets are:\n"<<count1;
}