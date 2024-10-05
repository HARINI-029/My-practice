//INSERTION SORT//
#include<iostream>
using namespace std;
int main()
{
    int a[5]={3,2,6,5,1};
    int i,j;
    for(i=1;i<5;i++)
    {
        for(j=i;j>0;j--)
        {
            if(a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
            }
            else
            {
                break;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
}