//COUNTING NUMBER OF TRUE PRESENT//
//Here true =1 and false =0//
#include <iostream>
using namespace std;

int main() {
    const int MAX_SIZE = 100; // Assuming a maximum array size
    int n, a[MAX_SIZE], i, count = 0;

    cout << "Enter the size of the array (up to " << MAX_SIZE << "):\n";
    cin >> n;

   
    

    cout << "Enter " << n << " integers:\n";
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Counting occurrences of 'TRUE' (assuming you meant the integer value 1):\n";
    for (i = 0; i < n; i++) {
        if (a[i] == 1) { // Assuming you meant to compare with the integer 1
            count++;
        }
    }

    cout << "Count of 'TRUE' (or 1): " << count << endl;

    return 0;
}

