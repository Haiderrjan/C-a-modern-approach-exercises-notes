#include <stdio.h>

int main(void) {

    int n;
    int odd = 1;
    int square = 3;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d",&n);


    for (int i = 1; i <= n; ++i) {
        printf("%10d%10d\n",i ,square);
        square += odd;
        odd += 2;
    }

    return 0;
}



