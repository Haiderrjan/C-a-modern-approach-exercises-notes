#include <stdio.h>
#include <math.h>

int main(void) {
    double x;
    double y;
    double average;
    double oldY;

    double zero = 0.00001;


    printf("Enter a positive number: ");

    scanf("%lf", &x);

    printf("Enter a initial guess: ");
    scanf("%lf", &y);


    for (;;) {
        average = 0.5 * (y + x / y);


        oldY = y;

        y = average;

        double fabs(double average);
        double fabs(double x);
        double fabs(double y);
        double fabs(double xy);

        if (oldY - y < 0.00001) {
            printf("Square root: %f",y);
            break;
        }
    }


    /// the formula is in the book
    /// do abs to get precise value only input once the value terminates
    /// for loop would do and a double :)


    // for (;;) {
    //
    //     if (y < 0.00001) {
    //         break;
    //     }
    // }

    return 0;
}
