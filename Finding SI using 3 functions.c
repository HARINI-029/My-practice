#include<stdio.h>
float input(float *pri,float *rate,float *ti);
float process(float p,float r,float t);
float output(float a);
void main()
{
    float p,r,t;
    input(&p,&r,&t);//1.address of p,r,t is passed to pri,rate,ti
    float si;
    si=process(p,r,t);//3.now p,r,t has value entered by user
    output(si);//5. si has value of error
}
float input(float *pri,float *rate,float *ti)
{
    printf("Enter p,r,t\n");
    scanf("%f %f %f",pri,rate,ti);//2.any changes to pri,rate,ti affect p,r,t
}
float process(float p,float r,float t)
{
    return (p*r*t)/100;//4. processed and stored in si
}
float output(float a)
{
    printf("%f",a);//6. value of si is passed to a;
}



