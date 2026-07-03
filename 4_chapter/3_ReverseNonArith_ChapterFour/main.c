#include <stdio.h>



int main(void) {

    int firstD;
    int secondD;
    int thirdD;

    printf("Enter a three-digit number:");
    scanf("%1d%1d%1d", &firstD, &secondD, &thirdD);
    printf("The reversal is: %d%d%d", thirdD, secondD, firstD);

    return 0;
}