#include <stdio.h>

int main(void) {
    int dividend, gcd, divisor, temp, userDividend;

    printf("Enter two integers:");
    scanf("%d/%d", &dividend, &gcd);

    divisor = gcd;
    userDividend = dividend;

    for (;;) {
        if (dividend % gcd == 0) {
            break;
        }

        temp = gcd;
        gcd = dividend % gcd;
        dividend = temp;
    }

    printf("\n");
    printf("dividend: %d\n", userDividend);
    printf("divisor: %d\n", divisor);
    printf("\n");

    userDividend = userDividend / gcd;
    divisor = divisor / gcd;

    printf("Greatest common divisor: %d\n", gcd);
    printf("In Lowest terms: %d/%d\n", userDividend, divisor);
    return 0;
}
