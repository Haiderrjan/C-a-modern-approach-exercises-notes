#include <stdio.h>

int main(void) {

    float income;
    float tax;

    printf("Enter amount of taxable income:");
    scanf("%f",&income);

    if (income <= 750) {
        tax = income * 0.01f;
    } else if (income <= 2250) {
        tax = 7.50f + (0.02f * (income - 750.00f));
    } else if (income <= 3750) {
        tax = 37.50f + (0.03f * (income - 2250.00f));
    } else if  (income <= 5250){
        tax = 82.50f + (0.04f * (income - 3750.00f));

    } else if (income <= 7000) {
        tax = 142.50f + (0.05f * (income - 5250.00f));

    } else {
        tax = 230.00f + (0.06f * (income - 7000.00f));
    }

    printf("taxable income: $%.2f \n",tax);

    return 0;

}
