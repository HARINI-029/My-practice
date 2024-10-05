//Program to multiply by length//
#include<iostream>
using namespace std;
int main()
{
   int a[5]={1,2,3,4,5},sum,count,m;
   int i;
   for(i=0;i<5;i++)
   {
       sum=a[i]/10;
       count++;
   }
   for(i=0;i<5;i++)
   {
       m=a[i]*count;
       cout<<m<<"\n";
   }
}