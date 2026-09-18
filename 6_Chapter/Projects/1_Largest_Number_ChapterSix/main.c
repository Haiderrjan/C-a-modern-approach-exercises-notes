#include <stdio.h>

int main(void) {

    float num;
    float largest = 0.0f;
    
    for (;;) {

        printf("Enter a number (0 to stop):");

        scanf("%f",&num);
        if (num <= 0) {
            break;
        }

        if (num > largest) {
            largest = num;
        }
    }
    printf("The largest number entered was %.2f",largest);

    return 0;
}
