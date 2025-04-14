//Newton Raphson//
#include <stdio.h>
#include <math.h>

// Function to evaluate f(x) = x^3 - 4x - 9
double f(double x) {
    return x * x * x - 4 * x - 9;
}

// Function to evaluate f'(x) = 3x^2 - 4
double f_prime(double x) {
    return 3 * x * x - 4;
}

int main() {
    double x0, x1, error;
    int i = 1, max_iter;

    // Get inputs from user
    printf("Enter initial guess, error tolerance, and maximum iterations:\n");
    scanf("%lf %lf %d", &x0, &error, &max_iter);

    // Start iteration
    while (i <= max_iter) {
        if (f_prime(x0) == 0) {
            printf("Error: Derivative is zero. Division by zero not allowed.\n");
            return 1;
        }

        x1 = x0 - f(x0) / f_prime(x0); // Newton-Raphson formula
        printf("Iteration %d: x = %lf\n", i, x1);

        if (fabs(x1 - x0) < error) {
            printf("Root found: %lf\n", x1);
            return 0;
        }

        x0 = x1; // Update for next iteration
        i++;
    }

    printf("Root not found within the given number of iterations.\n");
    return 1;
}
