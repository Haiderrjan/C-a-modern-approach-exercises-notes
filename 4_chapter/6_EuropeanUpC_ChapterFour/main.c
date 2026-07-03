#include <stdio.h>

int main(void) {

    // 869148426000

    long  digit;

    int d12, d11, d10,d9,d8, d7;
    int d6, d5, d4, d3,d2, d1;


    int firstSum;
    int secondSum;
    int total;

    printf("Enter the first 12 digits of EAN: ");
    scanf("%ld", &digit);

    d12 = (digit % 10);

    digit /= 10;
    d11 = digit % 10;

    digit /= 10;
    d10 = digit % 10;

    digit /= 10;
    d9 = digit % 10;

    digit /= 10;
    d8 = digit % 10;

    digit /= 10;
    d7 = digit % 10;

    digit /= 10;
    d6 = digit % 10;

    digit /= 10;
    d5 = digit % 10;

    digit /= 10;
    d4 = digit % 10;

    digit /= 10;
    d3 = digit % 10;

    digit /= 10;
    d2 = digit % 10;


    digit /= 10;
    d1 = digit % 10;

    printf("Digit of EAN u entered: %d %d %d %d %d %d %d %d %d %d %d %d\n", d1,d2,d3,d4,d5,d6,d7,d8,d9,d10,d11,d12);

    firstSum = d2 + d4 + d6 + d8 +  d12;
    secondSum = d1 + d7 + d9 + d11;

    total = (firstSum * 3) + secondSum;

    total -= 1;
    total %= 10;
    total %= 9;

    printf("Check digit: %d", total);

    return 0;
}