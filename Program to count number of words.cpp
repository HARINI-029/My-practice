//Program to count number of words//
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string a;
    int count = 0;
    cout << "Enter a sentence:\n";
    getline(cin, a); // Read the entire line including spaces
   

    // Count words based on spaces
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ') // Use equality operator
        {
            count++;
        }
    }

    // Adding one to count to account for the last word
    count = count+ 1 ; 
    cout << "Number of words: " << count << endl;
}
