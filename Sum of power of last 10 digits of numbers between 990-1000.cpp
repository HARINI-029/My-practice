//Sum of power of last 10 digits of numbers between 990-1000//
#include <iostream>
#include <iomanip> // For std::setprecision
#include <cmath>   // For pow function
using namespace std;

int main()
{
    int i;
    int sum;
    for(i = 990; i <= 1000; i++)
    {
        double a = i*i; // Use double to handle large numbers
     
        sum=sum+a;
    }
    cout<<"sum of power of last 10 digits is: "<<fixed<<abs(sum);
    return 0;
}

 
