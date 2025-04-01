#include<stdio.h>
#include<math.h>
float input(float *a,float *b,float *c );
float process(float s1,float s2,float s3);
float output(float a);
void main()
{
    float s1,s2,s3,s;
    input(&s1,&s2,&s3);
    float area;
    area=process(s1,s2,s3);
    output(area);
}
float input(float *a,float *b,float *c )
{
    printf ("Enter 3 sides of a triangle \n");   
	scanf ("%f%f%f", a, b, c);

}
float process(float s1,float s2, float s3)
{
    float s;
    s=(s1+s2+s3)/2;
    return  sqrt (s * (s-s1) * (s-s2) * (s-s3)); 

}
float output(float a)
{
    printf("%f",a);
}
