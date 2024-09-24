// Basic Program using Pass by Value:
//any changes in n does not affect the original which is 'a'
#include<iostream>
using namespace std;
void incr(int n)
{
    n++;
    cout<<n<<"\n";
}
int main()
{
    int a=10;
    incr(a);
    cout<<a;
    
}