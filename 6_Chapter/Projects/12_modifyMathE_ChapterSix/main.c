#include <stdio.h>

int main(void) {
    double n;
    double fac = 1;
    double decimal;
    double sum;
    double e;

    printf("Enter a number:");
    scanf("%lf", &n);

    for (double i = 1; i <= n; i++) {
        fac = i * fac;
        decimal = 1 / fac;
        sum = sum + decimal;
    }

    e = 1 + sum;
    printf("Answer is: %f\n", e);


    return 0;
}
