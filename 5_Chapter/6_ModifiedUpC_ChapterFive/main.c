#include <stdio.h>

int main(void) {

    int singleDigit;
    int f1, f2, f3, f4, f5;
    int s1, s2, s3, s4, s5;


    int checkDigit;

    int firstSum;
    int secondSum;
    int total;

    int lastDigit;

    printf("Enter the first (single) digit: ");
    scanf("%1d", &singleDigit);



    printf("Enter the first group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &f1, &f2, &f3, &f4, &f5);

    printf("Enter the second group of five digits: ");
    scanf("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);

    printf("Check digit: ");
    scanf("%1d", &checkDigit);

    firstSum = singleDigit + f2 + f4 + s1 + s3 + s5;
    secondSum =  f1 + f3 + f5 + s2  + s4;
    total = 3 * firstSum + secondSum;

    lastDigit = 9 - ((total - 1) % 10);


    if (lastDigit == checkDigit) {
        printf("VALID\n");
    } else {
        printf("NOT VALID\n");
    }


    return 0;
}