#include<stdio.h>
float input(float *r);
float process(float area);
float output(float a);
void main()
{
    float rad;
    input(&rad);
    float area1;
    area1=process(rad);
    output(area1);
}
float input(float *r)
{
    printf("Enter the radius\n");
    scanf("%f",r);
}
float process(float area)
{
    return 3.14*area*area;
}
float output(float a)
{
    printf("%f",a);
}
