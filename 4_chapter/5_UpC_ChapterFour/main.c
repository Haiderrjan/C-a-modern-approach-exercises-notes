#include <stdio.h>


int main(void) {

    // 01380015173
    int digit;

    int s5, s4, s3, s2, s1;
    int f5, f4, f3, f2, f1;
    int singleD;

    int firstSum;
    int secondSum;
    int total;

    printf("Enter the first 11 digits of UPC: ");
    scanf("%d", &digit);

    s5 = (digit % 10);

    digit /= 10;
    s4 = digit % 10;

    digit /= 10;
    s3 = digit % 10;

    digit /= 10;
    s2 = digit % 10;

    digit /= 10;
    s1 = digit % 10;


    digit /= 10;
    f5 = digit % 10;

    digit /= 10;
    f4 = digit % 10;

    digit /= 10;
    f3 = digit % 10;

    digit /= 10;
    f2 = digit % 10;

    digit /= 10;
    f1 = digit % 10;

    digit /= 10;
    singleD = digit % 10;

    printf("%d %d %d %d %d %d %d %d %d %d %d\n",singleD,f1,f2,f3,f4,f5,s1, s2, s3,s4, s5);

    firstSum = singleD + f2 + f4 + s1 + s3 + s5;
    secondSum =  f1 + f3 + f5 + s2  + s4;
    total = 3 * firstSum + secondSum;

    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    return 0;
}

