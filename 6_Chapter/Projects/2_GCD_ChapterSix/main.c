#include <stdio.h>

int main(void) {

    int dividend,divisor,temp;

    printf("Enter two integers:");
    scanf("%d %d",&dividend,&divisor);

    for (;;) {

        if (dividend % divisor == 0) {
            break;
        }

            temp = divisor;
            divisor = dividend % divisor;
            dividend = temp;


    }

    printf("Greatest common divisor: %d", divisor);

    return 0;
}
