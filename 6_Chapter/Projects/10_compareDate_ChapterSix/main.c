#include <stdio.h>

int main(void) {

    int day;
    int month;
    int year;

    int earlyDay = 100;
    int earlyMonth = 100;
    int earlyYear = 100;


    for (;;) {
        printf("Enter a date (mm/dd/yy):");
        scanf("%d/%d/%d", &day, &month, &year);

        if (day == 0 && month == 0 && year == 0) {
            break;
        }

       
        if (year < earlyYear) {
            earlyDay = day;
            earlyMonth = month;
            earlyYear = year;
        } else if (year == earlyYear) {
            if (month < earlyMonth) {
                earlyDay = day;
                earlyMonth = month;
                earlyYear = year;
            } else if (month == earlyMonth) {
                if (day <= earlyDay) {
                    earlyDay = day;
                    earlyMonth = month;
                    earlyYear = year;
                }
            }
        }
    }

    printf("%d/%02d/%02d is the earliest date\n", earlyDay, earlyMonth, earlyYear);

    return 0;
}

