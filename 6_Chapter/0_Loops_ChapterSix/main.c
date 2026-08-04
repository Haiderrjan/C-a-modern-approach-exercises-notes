#include <stdio.h>

int main(void) {
    int cmd;
    float balance;
    float credit;
    float debit;

    balance = 0.0f;

    printf("*** ACME Checkbook-Balancing Program ***\n");
    printf("Commands: 0 = clear, 1 = credit, 2 = debit ");
    printf("3 = balance, 4 = exit\n\n");

    for (;;) {
        printf("Enter command: ");
        scanf("%d", &cmd);

        switch (cmd) {
            case 0:
                balance = 0.0f;
                break;
            case 1:
                printf("Enter an amount of credit: ");
                scanf("%f", &credit);
                balance += credit;
                break;
            case 2:
                printf("Enter amount of debit: ");
                scanf("%f", &debit);
                balance -= debit;
                break;
            case 3:
                printf("Current balance £%.2f\n", balance);
                break;
            case 4:
                return 0;
            default:
                printf("Commands: 0 = clear, 1 = credit, 2 = debit");
                printf("3 = balance, 4 = exit\n\n");
                break;

        }

    }

    return 0;
}




    // square.c

    // int i;
    // int n;
    //
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d",&n);
    //
    // i = 1;
    //
    // while (i <= n ) {
    //
    //     printf("%10d%10d\n", i, i * i);
    //     i++;
    // }



    // sum.c

    // int n;
    // int sum;
    //
    // sum = 0;
    //
    // printf("This program sums a series of integers.\n");
    // printf("Enter integers (0 to terminate): ");
    //
    // scanf("%d",&n);
    //
    // while (n != 0) {
    //     sum += n;
    //
    //     scanf("%d", &n);
    // }
    //
    // printf("the sum is: %d\n",sum);



    // numdigits.c

    // int digits;
    // int n;
    //
    // digits = 0;
    //
    // printf("Enter a non-negative integer: ");
    //
    // scanf("%d",&n);
    //
    // do {
    //     n /= 10;
    //     digits++;
    //
    // } while (n > 0);
    //
    // printf("The number has %d digit(s).\n", digits);



    // square2.c

    // int i;
    // int n;
    //
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d",&n);
    //
    //
    // for (i = 1; i <= n; i++) {
    //     printf("%10d%10d\n",i, i * i);
    // }



    // square3.c

    // int i;
    // int n;
    // int odd;
    // int square;
    //
    //
    // printf("This program prints a table of squares.\n");
    // printf("Enter number of entries in table: ");
    // scanf("%d",&n);
    //
    //
    // i = 1;
    // odd = 3;
    // for (square = 1; i <= n; odd += 2) {
    //     printf("%10d%10d\n",i ,square);
    //     ++i;
    //     square += odd;
    // }
