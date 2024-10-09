#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    cout<<"This program finds perimeter of cirlce or square depending upon ur choice\n";
    cout<<"Click 1 for perimeter of square\n";
    cout<<"Click 2 for perimeter of circle\n";
    int num;
    
    cin>>num;
    
   switch(num)
   {
       case 1: int a;
       cout<<"Enter the side\n";
       cin>>a;
       cout<<"perimeter of square\n"<<4*a;
       break;
       case 2: int r;
       cout<<"Enter the radius of circle\n";
       cin>>r;
       cout<<"perimeter of circle\n"<<2*r*3.14;
       break;
       
   }
}