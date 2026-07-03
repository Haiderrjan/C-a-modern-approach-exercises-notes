
#include <stdio.h>

int main()
{
	int dollar;
	int twenty;
	int ten;
	int five;

	printf("Enter a dollar amount: ");
	scanf("%d", &dollar);

	twenty = dollar / 20;
	dollar = dollar - (20 * twenty);

	ten = dollar / 10;
	dollar = dollar - (10 * ten);

	five = dollar / 5;
	dollar = dollar - (5 * five);

	printf("$20 bills: %d\n", twenty);
	printf("$10 bills: %d\n", ten);
	printf("$5 bills: %d\n", five);
	printf("$1 bills: %d\n", dollar);
	return 0;

}
