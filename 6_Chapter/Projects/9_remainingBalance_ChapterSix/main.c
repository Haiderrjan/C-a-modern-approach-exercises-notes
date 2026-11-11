
#include <stdio.h>

int main()
{
    float loan;
    float interestR;
    float monthlyI;
    float monthlyP;

    int payment;
    float paymentLoop;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interestR);

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyP);

    interestR = interestR * 100.0f / 12.0f;
    monthlyI = loan / 100 * (interestR / 100);
    loan = loan - monthlyP;

    paymentLoop = loan + monthlyI;


    printf("Enter the number of payments: ");
    scanf("%d", &payment);

    for (int i = 1; i <= payment; i++) {
        printf("Balance remaining after %dst payment: $%.2f\n", i, paymentLoop);
        monthlyI = paymentLoop / 100 * (interestR / 100);
        paymentLoop = paymentLoop - monthlyP;
        paymentLoop = paymentLoop + monthlyI;
    }

    return 0;
}
