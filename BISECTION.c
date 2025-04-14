#include <stdio.h>
#include <math.h>

int i = 1; // Iteration counter

double f(double x) {
    return x * x * x - 4 * x - 9;
}

double bisect(float a, float b) {
    double x1 = (a + b) / 2;
    i++;
    printf("Midpoint: %f\n", x1);
    return x1;
}

int main() {
    float a, b, er;
    int i_max;
    printf("Enter the lower limit, upper limit, maximum error, and maximum iterations:\n");
    scanf("%f %f %f %d", &a, &b, &er, &i_max);

    double x1;
    while (i < i_max) {
        x1 = bisect(a, b);

     
        if (f(a) * f(x1) < 0) {
            b = x1;
        } else {
            a = x1;
        }

        if (fabs(b - a) < er) {
            printf("Root is: %f\n", x1);
            return 0;
        }
    }

    printf("No root found within the given iterations.\n");
    return 1;
}



    
