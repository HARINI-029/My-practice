/************************************************
 * Program to find all the factors of  a given number
 * ***********************************************/
#include <stdio.h>

int main() {
    int i, num;
    //printf("Enter a number:\n ");
    printf("the factors of the given number are:\n");
    scanf("%d", &num);

    if (num <= 0) {
        printf("Please enter a positive integer.\n");
        return 1; 
    }

    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d\n", i); 
        }
    }
    return 0;
}
