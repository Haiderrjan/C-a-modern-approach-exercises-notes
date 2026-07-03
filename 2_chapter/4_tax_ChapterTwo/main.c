#include <stdio.h>

int main(void)
{
	float amount;
	float fivePercent;
	float tax;

	printf("Enter a amount: $");
	scanf("%f", &amount);

	fivePercent = (amount / 100) * 5;
	tax = amount + fivePercent;

	printf("With tax added: $ %.2f", tax);

}

