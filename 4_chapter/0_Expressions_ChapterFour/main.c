#include <stdio.h>


int main(void) {


    int i = 1;
    int j = 2;

    int k = ++i + j++;

    printf("%d", k);

    return 0;



    //int singleDigit;
    //int f1, f2, f3, f4, f5;
    //int s1, s2, s3, s4, s5;


    //int checkDigit;

    //int firstSum;
    //int secondSum;
    //int total;

    //printf("Enter the first (single) digit: ");
    //scanf_s("%1d", &singleDigit);

    //printf("Enter the first group of five digits: ");
    //scanf_s("%1d%1d%1d%1d%1d", &f1, &f2, &f3, &f4, &f5);

    //printf("Enter the second group of five digits: ");
    //scanf_s("%1d%1d%1d%1d%1d", &s1, &s2, &s3, &s4, &s5);

    //printf("Check digit: ");
    //scanf_s("%1d", &checkDigit);

    //firstSum = singleDigit + f2 + f4 + s1 + s3 + s5;
    //secondSum =  f1 + f3 + f5 + s2  + s4;
    //total = 3 * firstSum + secondSum;

    //printf("Check digit: %d\n", 9 - ((total - 1) % 10));



}