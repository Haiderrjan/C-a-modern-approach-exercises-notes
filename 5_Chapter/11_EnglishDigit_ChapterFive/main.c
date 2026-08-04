#include <stdio.h>

int main(void) {


    int ten;
    float num;
    int one;
    float placeholder;




    printf("Enter a two-digit number: ");
    scanf("%f", &num);

    ten = num / 10;




    printf("%f",placeholder);

    if (placeholder < 0) {
        one = placeholder * 100;
        one = one / 10;
    }













     printf("%d\n",ten);
     printf("%d\n",one);

    printf("You entered the number: ");


    if (num >= 10 && num < 20) {
        ten = num;
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


    if (one > 0) {
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
