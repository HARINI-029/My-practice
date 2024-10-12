//PROGRAM TO FIND FIRST AND LAST OCCURENCE OF ELEMENT//
#include<iostream>
using namespace std;

int main()
{
    int a[6] = {5, 7, 7, 8, 8, 10};
    int start = 0, end = 5;
    int mid, num = 7; // Changed num to 7 for demonstration
    int first = -1, last = -1; // Initialize first and last occurrences

    // Finding the first occurrence
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == num)
        {
            first = mid; // Store the first occurrence
            end = mid - 1; // Continue searching in the left half
        }
        else if (a[mid] < num)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Resetting start and end for the last occurrence search
    start = 0;
    end = 5;

    // Finding the last occurrence
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (a[mid] == num)
        {
            last = mid; // Store the last occurrence
            start = mid + 1; // Continue searching in the right half
        }
        else if (a[mid] < num)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    // Output the results
    if (first != -1)
    {
        cout << "First occurrence of element is: " << first << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    if (last != -1)
    {
        cout << "Last occurrence of element is: " << last << endl;
    }
    else
    {
        cout << "Element not found." << endl;
    }

    return 0;
}

    
