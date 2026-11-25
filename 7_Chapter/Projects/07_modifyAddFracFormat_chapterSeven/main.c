#include <stdio.h>

int main(void) {
    int num1;
    int denom1;
    int num2;
    int denom2;
    int result_num;
    int result_denom;

    char oper;

    printf("Enter two fractions separated by an operator sign: ");
    scanf("%d/%d %c %d/%d", &num1, &denom1, &oper, &num2, &denom2);


    if (oper == '+') {
        result_num = num1 * denom2 + num2 * denom1;
        result_denom = denom1 * denom2;
    } else if (oper == '-') {
        result_num = num1 * denom2 - num2 * denom1;
        result_denom = denom1 * denom2;
    } else if (oper == '*') {
        result_num = num1 * num2;
        result_denom = denom1 * denom2;
    } else if (oper == '/') {
        result_num = num1 * denom2;
        result_denom = denom1 * num2;
    }


    if (result_num == result_denom) {
        printf("The sum is: 1");
    } else {
        printf("The sum is %d/%d\n", result_num, result_denom);
    }


    return 0;
}
