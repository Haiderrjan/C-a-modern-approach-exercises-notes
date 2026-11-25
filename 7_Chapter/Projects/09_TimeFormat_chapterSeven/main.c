#include <stdio.h>
#include <ctype.h>

int main(void) {
    int hour;
    int min;
    char indi;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %ch", &hour, &min, &indi);

    indi = toupper(indi);

    if (hour == 12 && indi == 'A') {
        hour = 00;
    } else if (indi == 'P' && hour != 12) {
        hour += 12;
        printf("%d\n", hour);
    }

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, min);


    return 0;
}
