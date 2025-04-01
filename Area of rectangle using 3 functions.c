#include <stdio.h>

void input(float *m, float *n);
float area_rectangle(float length, float width);
void output(float a);

int main() 
{
    float length, width, a,area;
    input(&length, &width); 
    a= area_rectangle(length, width); 
    output(a);
    return 0; 
}

void input(float *m, float *n)
{
    printf("Enter values for length & width \n");
    scanf("%f%f", m, n); 
}

float area_rectangle(float m, float n)
{
    return (m * n);
}

void output(float a)
{
    printf("Area of rectangle = %f\n", a); 
}