#include <stdio.h>

int main(void) {
    char let;
    int sum = 0;
    int count = 1;

    float avg = 0;


    printf("Enter a sentence: ");

    for (;;) {
        let = getchar();
        if (let == '\n') {
            break;
        }

        if (let != ' ') {
            sum += 1;
        }

        if (let == ' ') {
            count += 1;
        }
    }

    avg = (float) sum / count;

    printf("Average word length: %.1f", avg);


    return 0;
}
