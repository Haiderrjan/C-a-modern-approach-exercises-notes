

#include <stdio.h>

int main()
{
    float loan;
    float interestR;
    float monthlyI;
    float monthlyP;

    float firstPayment;
    float secondPayment;
    float thirdPayment;


    printf("Enter amount of loan: ");
    scanf("%f", &loan);

    printf("Enter interest rate: ");
    scanf("%f", &interestR);

    printf("Enter monthly payment: ");
    scanf("%f", &monthlyP);

    interestR = interestR * 100.0f / 12.0f;
    monthlyI = loan / 100 * (interestR / 100);
    loan = loan - monthlyP;
    firstPayment = loan + monthlyI;


    printf("Balance remaining after first payment: $%.2f\n", firstPayment);

    monthlyI = firstPayment / 100 * (interestR / 100);
    firstPayment = firstPayment - monthlyP;
    secondPayment = firstPayment + monthlyI;

    printf("Balance remaining after second payment: $%.2f\n", secondPayment);

    monthlyI = secondPayment / 100 * (interestR / 100);
    secondPayment = secondPayment - monthlyP;
    thirdPayment = secondPayment + monthlyI;

    printf("Balance remaining after third payment: $%.2f\n", thirdPayment);





    return 0;
}