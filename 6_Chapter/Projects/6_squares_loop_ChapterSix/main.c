#include <stdio.h>

int main(void) {
    int num;
    int sqr;

    printf("Enter a number: ");
    scanf("%d", &num);

    int i = 1;

    for (;;) {
        if (i % 2 == 0) {
            sqr = i * i;
            printf("%d\n", sqr);
        }
        i++;
        if (sqr >= num) {
            break;
        }
    }


    return 0;
}
