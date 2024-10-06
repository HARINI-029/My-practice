/********************************************************************
 *Father and Son Ages
 * Сalculate how many years ago the father was twice as old as his son
 *  or in how many years he will be twice as old.
 * ******************************************************************/
#include<iostream>
using namespace std;
int main()
{
   int f,s,i;
   cout<<"Enter the current age of father and son\n";
   cin>>f>>s;

  while(i==0)
  {
   
       i=f - 2*s;
       f++;
       s++;
  }
   if(i<0)
   {
   cout<<abs(i)<<" years ago the father age is twice as his son\n";
}
else
{
    cout<<i<<"years from now the father age is twice as his son\n";
}
}