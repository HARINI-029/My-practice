#include <stdio.h>
void input(int *amount)
 {
	printf("Enter the amount: ");
	scanf("%d", amount);
}

void calculate_coins(int amount, int *ten, int *five, int *one) 
{
	*ten = amount / 10; 
	amount %= 10
	*five = amount / 5; 
	amount %= 5; 
	*one = amount; 
}

void output(int ten, int five, int one)
{
	printf("₹10 coins: %d\n", ten);
	printf("₹5 coins: %d\n", five);
	printf("₹1 coins: %d\n", one);
}
int main()
 {
	int amount, ten, five, one;

	input(&amount);

	calculate_coins(amount, &ten, &five, &one);

	output(ten, five, one);
	return 0;
}
