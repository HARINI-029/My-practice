//Program to find number of moves possible for bishop//
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
    int i,j,total;
    cout<<("Enter the row and coloumn\n");
    cin>>i>>j;
    int moves;
    int a=min(8-i,8-j);
    int b=min(8-i,j- 1);
    int c=min(i-1,j-1);
    int d=min(i-1,8-j);
    total=a+b+c+d;
cout<<"total number of moves of bishop is: "<<total;
    return 0;
    
}