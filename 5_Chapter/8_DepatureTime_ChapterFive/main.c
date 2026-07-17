#include <stdio.h>

int main(void) {

    int min;
    int hour;
    int time;

    printf("Enter A 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    time = hour * 60 + min;
    printf("%d\n",time);



    int d1,d2,d3,d4,d5,d6,d7,d8;

    d1 = 8

    // 8:00 am 480 min
    // 9:43 am 583 min
    // 11:19 am 679 min
    // 12:47 pm 767 min
    // 2:00 pm 840 min
    // 3:45 pm 945 min
    // 7:00 pm 1140 min
    // 9:45 pm 1305 min

    // 795
    // 767
    // 850
    // 795 - 767 = 28 12:47 pm
    // 840 - 795 =  45 2:00 pm#




    if (time < 480) {
        printf("Closest departure time is 8:00 a.m,. arriving at 10:16 a.m.");
    } else if (time < 583 ) {
        printf("Closest departure time is 9:43 a.m,. arriving at 11:52 a.m.");
    } else if (time < 679 ) {
        printf("Closest departure time is 11:19 a.m,. arriving at 1:31 p.m.");
    } else if (time < 767 ) {
        printf("Closest departure time is 12:47 p.m,. arriving at 3:00 p.m.");
    } else if (time < 840) {
        printf("Closest departure time is 2:00 p.m,. arriving at 4:08 p.m.");
    } else if (time < 945) {
        printf("Closest departure time is 3:45 p.m,. arriving at 5:55 p.m.");
    }
    else if (time < 1140) {
        printf("Closest departure time is 7:00 p.m,. arriving at 9:20 p.m.");
    } else {
        printf("Closest departure time is 9:45 p.m,. arriving at 11:58 p.m.");
    }

 return 0;


}





