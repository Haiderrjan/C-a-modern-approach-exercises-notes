#include <stdio.h>

int main(void) {

    int min;
    int hour;
    int time;

    int d1,d2,d3,d4,d5,d6,d7,d8;
    int d1a,d2a,d3a,d4a,d5a,d6a,d7a,d8a;

    int check = 1;
    int compare;

    d1 = 480;
    d2 = 583;
    d3 = 679;
    d4 = 767;
    d5 = 840;
    d6 = 945 ;
    d7 = 1140;
    d8 = 1305;


    printf("Enter A 24-hour time: ");
    scanf("%d:%d", &hour, &min);

    time = hour * 60 + min;


    // check to see if time is past midnight
    if (time <= 172) {
        time = 1404 - time;
    }

    printf("The time in minutes: %d\n",time);


    compare = d1 - time;
    check = compare;
    d1a = compare;

    if (check < 0) {
        check = check * - 1;
        d1a = d1a * - 1;
    }


    compare = d2 - time;
    d2a = compare;


    if (check > compare) {
        check = compare;
        if (check < 0) {
            check = check * - 1;
            d2a = d2a * - 1;
        }
    }

    compare = d3 - time;
    d3a = compare;

    if (check > compare) {
        check = compare;
        if (check < 0) {
            check = check * - 1;
            d3a = d3a * - 1;
        }
    }


    compare = d4 - time;
    d4a = compare;

    if (check > compare) {
        check = compare;
        if (check < 0) {
            check = check * - 1;
            d4a = d4a * - 1;
        }
    }


    compare = d5 - time;
    d5a = compare;

    if (check > compare) {
        check = compare;
        if (check < 0) {
            check = check * - 1;
            d5a = d5a * - 1;
        }
    }

    compare = d6 - time;
    d6a = compare;

    if (check > compare) {
        check = compare;
        if (check < 0) {
            check = check * - 1;
            d6a = d6a * -1;
        }
    }


    compare = d7 - time;
    d7a = compare;

    if (check > compare) {
        check = compare;
        if (check < 0) {
            check = check * - 1;
            d7a = d7a * -1;
        }
    }

    compare = d8 - time;
    d8a = compare;

    if (check > compare) {
        check = compare;
        if (check < 0) {
            check = check * - 1;
            d8a = d8a * - 1;
        }
    }

    // 8:00 am 480 min
    // 9:43 am 583 min
    // 11:19 am 679 min
    // 12:47 pm 767 min
    // 2:00 pm 840 min
    // 3:45 pm 945 min
    // 7:00 pm 1140 min
    // 9:45 pm 1305 min




    if (check == d1a) {
        printf("Closest departure time is 8:00 a.m,. arriving at 10:16 a.m.");
    } else if (check == d2a) {
        printf("Closest departure time is 9:43 a.m,. arriving at 11:52 a.m.");
    } else if (check == d3a) {
        printf("Closest departure time is 11:19 a.m,. arriving at 1:31 p.m.");
    } else if (check == d4a) {
        printf("Closest departure time is 12:47 p.m,. arriving at 3:00 p.m.");
    } else if (check == d5a) {
        printf("Closest departure time is 2:00 p.m,. arriving at 4:08 p.m.");
    } else if (check == d6a) {
        printf("Closest departure time is 3:45 p.m,. arriving at 5:55 p.m.");
    }
    else if (check == d7a) {
        printf("Closest departure time is 7:00 p.m,. arriving at 9:20 p.m.");
    } else if (check == d8a){
        printf("Closest departure time is 9:45 p.m,. arriving at 11:58 p.m.");
    } else {
        printf("error wrong number given");
    }

 return 0;


}





