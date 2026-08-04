#include <stdio.h>

int main(void) {

    float twoDigit;
    float tenFiller1;
    float oneFiller2;
    int ten;
    int one;





    printf("Enter a two-digit number: ");
    scanf("%f", &twoDigit);

    tenFiller1 = twoDigit / 10.0f;
    ten = tenFiller1;


    oneFiller2 = (((twoDigit / 10.0f) - ten) * 10.0f) + 0.1f;
    one = oneFiller2;


    printf("You entered the number: ");

    if (twoDigit >= 10 && twoDigit < 20) {
        ten = twoDigit;
        one = 100;
    }

    switch (ten) {
        case 2: printf("Twenty");
            break;
        case 3: printf("Thirty");
            break;
        case 4: printf("Forty");
            break;
        case 5: printf("Fifty" );
            break;
        case 6: printf("Sixty");
            break;
        case 7: printf("Seventy");
            break;
        case 8: printf("Eighty");
            break;
        case 9: printf("ninety");
            break;
        case 10: printf("ten");
            break;
        case 11: printf("Eleven");
            break;
        case 12: printf("Twelve");
            break;
        case 13: printf("Thirteen");
            break;
        case 14: printf("Fourteen");
            break;
        case 15: printf("Fifteen");
            break;
        case 16: printf("Sixteen");
            break;
        case 17: printf("Seventeen");
            break;
        case 18: printf("Eighteen");
            break;
        case 19: printf("Nineteen");
            break;

    }


    if (one != 0 && twoDigit > 19) {
        printf("-");
    }

    switch (one) {
        case 1: printf("One");
            break;
        case 2: printf("Two");
            break;
        case 3: printf("Three");
            break;
        case 4: printf("Four");
            break;
        case 5: printf("Five");
            break;
        case 6: printf("Six");
            break;
        case 7: printf("Seven");
            break;
        case 8: printf("Eight");
            break;
        case 9: printf("nine");
            break;
        default: printf("");
    }

    return 0;



}
