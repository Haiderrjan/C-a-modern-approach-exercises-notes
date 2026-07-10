#include <stdio.h>

int main(void) {

    int windSpeed;

    printf("Enter a wind speed (in knots): ");
    scanf("%d",&windSpeed);



    if (windSpeed < 1) {
        printf("The wind speed is Calm\n");
    } else if (windSpeed >= 1 && windSpeed <= 3) {
        printf("The wind speed is light air\n");
    } else if (windSpeed >= 4 && windSpeed <= 27) {
        printf("The wind speed is Breeze\n");
    } else if (windSpeed >= 28 && windSpeed <= 47) {
        printf("The wind speed is Gale\n");
    } else if (windSpeed >= 48 && windSpeed <= 63) {
        printf("The wind speed is Storm\n");
    } else {
        printf("the wind speed is Hurricane\n");
    }

    return 0;
}
