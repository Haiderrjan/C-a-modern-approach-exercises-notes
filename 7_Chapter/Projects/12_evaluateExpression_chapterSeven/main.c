#include <stdio.h>

int main(void) {
    float num1;
    float num2;
    float num3;

    char oper1;
    char oper2;

    float value;

    printf("Enter an expression: ");

    scanf("%f%ch%f%ch%f", &num1, &oper1, &num2, &oper2, &num3);


    if (oper1 == '+') {
        value = num1 + num2;
        printf("Value : %.1f\n", value);
    } else if (oper2 == '-') {
        value = num1 - num2;
        printf("Value : %.1f\n", value);
    } else if (oper1 == '*') {
        value = num1 * num2;
        printf("Value : %.1f\n", value);
    } else {
        value = num1 / num2;
        printf("Value : %.1f\n", value);
    }

    if (oper2 == '+') {
        value += num3;
    } else if (oper2 == '-') {
        value -= num3;
    } else if (oper2 == '*') {
        value *= num3;
    } else {
        value /= num3;
    }

    printf("Value of expression: %.1f", value);


    return 0;
}
