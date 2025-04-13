/******************************************************************************

Function prototype: 
void input(int *amount);  
void calculate_coins(int amount, int *ten, int *five, int *one);  
void output(int ten, int five, int one); 

*******************************************************************************/
#include <stdio.h>
void input(int *amount)
{
    printf("Enter the amount\n");
    scanf("%d",amount);
    
}
void calculate_coins(int amount, int *ten, int *five, int *one)
{
    * ten = amount / 10;
    amount = amount % 10;
    *five = amount /5;
    amount = amount % 5;
    *one = amount;
    
    
}

void output(int ten, int five, int one)
{
    printf("The 10 : %d\n 5: %d\n one: %d\n",ten,five,one);
}

int main()
{
    int t,o,f,amt;
 input(&amt);
  calculate_coins(amt,&t,&f,&o);
   output(t,f,o);
}
  
 
