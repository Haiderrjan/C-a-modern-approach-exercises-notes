#include <stdio.h>
#include <ctype.h>

int main(void) {

    // Use typedef to create types named Int8, Int16, and Int 32. Define the types so that
    // they represent 8-bit, 16-bit, and 32-bit integers on your machine.

    typedef char Int8;
    typedef short Int16;
    typedef int Int32;



    printf("%zu\n", sizeof(Int8));
    printf("%zu\n", sizeof(Int16));
    printf("%zu\n", sizeof(Int32));











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

