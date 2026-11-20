#include <stdio.h>

int main(void) {

    int i = 0;
    char enter;


    for (;;) {
        printf("%10d%10d\n",i, i * i);
        if (i % 12 == 0) {
            printf("Press Enter to continue...");
            enter = getchar();
           if (enter != '\n') {
               break;
           }
        }
        i++;
    }


    return 0;
}
