#include <stdio.h>


int main(void) {

    int digit;
    int firstD;
    int middleD;
    int lastD;

    printf("Enter a three-digit number: ");
    scanf("%d", &digit);

    lastD = (digit % 10);
    middleD = ((digit % 100) - (digit % 10)) / 10;
    firstD = (digit / 100);
    printf("The reversal is: %d %d %d", lastD, middleD, firstD);

    return 0;
}

// 123
