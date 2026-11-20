#include <stdio.h>
#include <ctype.h>

int main(void) {


    double a = 010E2;
    float b = 32.1E+5;
    int c = 0790;
    int d = 100_000;
    float e = 3.978e-2;





    return 0;
}

// (a) 077 // error
// (b) 0x77
// (c) 0XABC



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


// length.c

// char ch;
// int len = 0;
//
// printf("Enter a message:");
// ch = getchar();
//
// while (ch != '\n') {
//     len++;
//     ch = getchar();
// }
//
// printf("Your message was %d character(s) long.\n",len);


// length2.c

// int len = 0;
//
// printf("Enter a message:");
//
// while (getchar() != '\n') {
//     len++;
//     ch = getchar();
// }
//
// printf("Your message was %d character(s) long.\n",len);

