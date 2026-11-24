#include <stdio.h>

int main(void) {
    char num;


    printf("Enter a Phone Number:");


    for (;;) {
        num = getchar();


        if (num == '\n') {
            break;
        }

        if (num == 'A' || num == 'B' || num == 'C') {
            printf("2");
        } else if (num == 'D' || num == 'E' || num == 'F') {
            printf("3");
        } else if (num == 'G' || num == 'H' || num == 'I') {
            printf("4");
        } else if (num == 'J' || num == 'K' || num == 'L') {
            printf("5");
        } else if (num == 'M' || num == 'N' || num == 'O') {
            printf("6");
        } else if (num == 'P' || num == 'R' || num == 'S') {
            printf("7");
        } else if (num == 'T' || num == 'U' || num == 'V') {
            printf("8");
        } else if (num == 'W' || num == 'X' || num == 'Y') {
            printf("9");
        } else {
            printf("%c", num);
        }
    }

    return 0;
}
