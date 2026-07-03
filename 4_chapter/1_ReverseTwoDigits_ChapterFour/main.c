#include <stdio.h>


int main(void) {

    int digit;
    int firstD;
    int lastD;

    printf("Enter a two-digit number: ");
    scanf("%d", &digit);

    firstD = (digit % 10);
    lastD = (digit / 10);
    printf("The reversal is: %d%d", firstD, lastD);

    return 0;
}
