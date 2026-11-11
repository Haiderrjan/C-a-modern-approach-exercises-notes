#include <stdio.h>

int main(void) {
    double decimal;

    double fac = 1;
    double sum = 0;
    double e = 0;

    double flow;
    double i = 1.0;

    printf("Enter a ε number (must be a floating-point number):");
    scanf("%lf", &flow);

    for (;;) {
        fac = i * fac;
        decimal = 1 / fac;
        sum = sum + decimal;

        if (decimal < flow) {
            break;
        }
        i++;
    }

    e = 1 + sum;

    printf("the term became less than ε at %.f!: %f\n", i, decimal);
    printf("Answer is: %f\n", e);
    return 0;
}
