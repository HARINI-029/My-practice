/***********************************************************
Program to return middle character from a string
* If the word's length is odd, return the middle character.
* If the word's length is even, return the middle two characters.
***************************************************************/
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    cout << "Enter a string: ";
    getline(cin, a); // Read the entire line including spaces

    int n = a.length(); // Get the length of the string

    if (n % 2 == 0) {
        int m = n / 2;
        cout << "The middle characters are: " << a[m - 1] << " and " << a[m] << endl; 
        int m = n / 2;
        cout << "The middle character is: " << a[m] << endl; // Display the middle character
    }

    return 0;
}
