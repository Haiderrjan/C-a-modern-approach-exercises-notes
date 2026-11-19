#include <stdio.h>
#include <ctype.h>

int main(void) {

    //
    // printf("size of char: %zu\n",sizeof(char));
    // printf("size of int: %zu\n",sizeof(int));
    // printf("size of long: %zu\n",sizeof(long));
    // printf("size of float: %zu\n",sizeof(float));
    // printf("size of double: %zu\n",sizeof(double));


    char ch;
    int i;


    do {
        scanf("%c", &ch);

    } while (ch != '\n');


    i = ch;
    printf("%d",ch);


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

