//ATM PIN//
#include<iostream>
#include<string.h>
#include<cctype>
using namespace std;
int main()
{
    int count,i;
    string a;
    cout<<"Enter a ATM PIN[4 or 6 digit]\n";
    getline(cin,a);
    for(int i=0;i<a.length();i++)
    {
        if(isalpha(a[i]))
        {
            cout<<"ERROR!!\n";
            break;
        }
        if(isdigit(a[i]))
        {
            count++;
        }
    }
    if(count==4||count==6)
    {
        cout<<"VALID PIN!!\n";
        cout<<"YOU JUST WON A LOTTERY OF 10000 FROM YOUR OWN ACCOUNT\n";
    }
    
}
