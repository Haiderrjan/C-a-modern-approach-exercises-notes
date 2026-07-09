#include <stdio.h>

int main(void) {

    int hour;
    int minute;



    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 0 && hour < 12) {
        printf("Equivalent 12-hour time: %d:%.2d AM", hour, minute);

    } else if (hour == 12) {
        printf("Equivalent 12-hour time: %d:%.2d PM", hour, minute);
    } else if (hour == 0) {
        hour = hour + 2;
        hour = hour + 10;
        printf("Equivalent 12-hour time: %d:%.2d AM", hour, minute);
    }
    else {
        hour = hour - 2;
        hour = hour - 10;
        printf("Equivalent 12-hour time: %d:%.2d PM", hour, minute);

    }



}
