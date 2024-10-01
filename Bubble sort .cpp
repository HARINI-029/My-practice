#include<iostream>
using namespace std;
int main()
{
    int a[5]={7,4,8,5,3};
    int i,j;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(a[j]<a[i])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<a[i]<<"\t";
    }
}