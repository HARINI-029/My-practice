/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void input(int *a , int *b)
{
    printf("Enter the values of a  and b\n");
    scanf("%d %d",a,b);
}

 int add(int a, int b)
{
    return a + b;
}

void output(int c)
{
    printf("The sum of number is:%d",c);
}

int main()
{
    int a,b,c;
    input(&a,&b);
   c= add(a,b);
   output(c);
   return 0;
}
    

