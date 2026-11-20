#include <stdio.h>

int main(void) {

    double n;
    double sum;

    sum = 0;

    printf("This program sums a series of integers.\n");
    printf("Enter integers (0 to terminate): ");

    scanf("%lf", &n);



    while (n != 0) {
        sum += n;

        scanf("%lf", &n);
    }

    printf("the sum is: %.2lf\n", sum);

    return 0;
}




// sum2.c (revisited) from section 6.1

// long n;
// long sum;
//
// sum = 0;
//
// printf("This program sums a series of integers.\n");
// printf("Enter integers (0 to terminate): ");
//
// scanf("%ld",&n);
//
// while (n != 0) {
//     sum += n;
//
//     scanf("%d", &n);
// }
//
// printf("the sum is: %ld\n",sum);
