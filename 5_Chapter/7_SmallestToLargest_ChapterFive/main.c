#include <stdio.h>

int main(void) {

    int numOne;
    int numTwo;
    int numThree;
    int numFour;

    int largest;
    int smallest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &numOne, &numTwo, &numThree, &numFour);


    if (numOne > numTwo && numOne > numThree && numOne > numFour) {
        largest = numOne;
    } else if (numTwo > numOne && numTwo > numThree && numTwo > numFour) {
        largest = numTwo;

    } else if (numThree > numOne && numThree > numTwo && numThree > numFour) {
        largest = numThree;
    } else {
        largest = numFour;
    }

    if (numOne < numTwo && numOne < numThree && numOne < numFour) {
        smallest = numOne;
    } else if (numTwo < numOne && numTwo < numThree && numOne < numFour) {
        smallest = numTwo;

    } else if (numThree < numOne && numThree < numTwo && numOne < numFour) {
        smallest = numThree;
    } else {
        smallest = numFour;
    }


    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
