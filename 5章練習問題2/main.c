#include <stdio.h>

int main(void)
{
	int juice, milk, money, payment, change;
	double tax;
	
	juice = 198;
	milk = 138;
	money = 1000;
	tax = 1.10;
	
	payment = (int) ((juice + milk * 2) * tax);
	change = money - payment;
	
	printf("%d‰~\n", change);
	
	return 0;
}