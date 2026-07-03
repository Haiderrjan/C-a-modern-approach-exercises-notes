#include <stdio.h>


int main(void) {

    int digit;
    int firstD;
    int secondD;
    int thirdD;
    int fourD;
    int fiveD;


    printf("Enter a number between 0 and 32767: ");
    scanf("%5d", &digit);

    firstD = digit % 8;
    secondD = (digit / 8) % 8;
    thirdD = ((digit / 8) / 8) % 8;
    fourD = (((digit / 8) / 8) / 8) % 8;
    fiveD = ((((digit / 8) / 8) / 8) / 8) % 8;




    printf("%d%d%d%d%d", fiveD, fourD, thirdD, secondD, firstD);


    return 0;
}

// 1953