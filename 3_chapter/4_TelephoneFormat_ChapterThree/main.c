#include <stdio.h>

int main(void) {


    int areaCode;
    int threeDigit;
    int fourDigit;

    printf("Enter Phone Number [(xxx) xxx-xxxx]: ");
    scanf("(%d)  %d-%d", &areaCode, &threeDigit, &fourDigit);
    printf("(%d)  %d-%d", areaCode, threeDigit, fourDigit);

    return 0;
}