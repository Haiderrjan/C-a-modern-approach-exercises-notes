#include <stdio.h>

int main(void) {

    int month;
    int day;
    int lastDay = 1;

    printf("Enter number of days in month: ");
    scanf("%d",&month);

    printf("Enter starting day of the week (1 = Sun, 7=Sat): ");
    scanf("%d",&day);


    for (int i = 1; i < day; i++) {
        printf("   ");
    }



    for (int i = 1; i <= month; i++) {

        printf("%3d",i);



        if (day % 7 == 0) {
            printf("\n");
        }

        day++;
    }






    return 0;



}
