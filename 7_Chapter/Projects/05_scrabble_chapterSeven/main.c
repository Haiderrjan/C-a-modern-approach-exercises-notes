#include <stdio.h>
#include <ctype.h>

int main(void) {
    char scrab;
    int sum = 0;

    printf("Enter a word: ");

    for (;;) {
        scrab = getchar();

        scrab = toupper(scrab);


        if (scrab == '\n') {
            break;
        }

        if (scrab == 'D' || scrab == 'G') {
            sum = sum + 2;
        } else if (scrab == 'B' || scrab == 'C' || scrab == 'M' || scrab == 'P') {
            sum = sum + 3;
        } else if (scrab == 'F' || scrab == 'H' || scrab == 'V' || scrab == 'W' || scrab == 'Y') {
            sum = sum + 4;
        } else if (scrab == 'K') {
            sum = sum + 5;
        } else if (scrab == 'J' || scrab == 'X') {
            sum = sum + 8;
        } else if (scrab == 'Q' || scrab == 'Z') {
            sum = sum + 10;
        } else {
            sum = sum + 1;
        }
    }
    printf("Scrabble value: %d", sum);
    return 0;
}
