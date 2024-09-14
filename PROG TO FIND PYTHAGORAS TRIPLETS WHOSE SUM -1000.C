/*****************************************************************
 To find Pythagorean triplet for which a+b+c=1000. 
 ****************************************************************/
#include <stdio.h>

int main() {
    int a, b, c;
    for (a = 1; a < 1000; a++) {
        for (b = a + 1; b < 1000; b++) {
            c = 1000 - a - b; 
            if (a * a + b * b == c * c) {
                printf("%d %d %d\n", a, b, c);
            }
        }
    }
    return 0;
}
