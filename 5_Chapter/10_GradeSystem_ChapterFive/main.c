#include <stdio.h>


int main(void) {

    int num;


    printf("Enter a numerical grade: ");
    scanf("%d",&num);


    if (num >= 0 && num <= 100  ) {
        num = num / 10;
    }

    switch (num) {
        case 10: case 9: printf("Letter Grade: A");
            break;
        case 8: printf("Letter Grade: B");
            break;
        case 7: printf("Letter Grade: C");
            break;
        case 6: printf("Letter Grade: D");
            break;
        case 5: case 4: case 3: case 2: case 1: case 0:
            printf("Letter Grade: F");
            break;
        default: printf("error number was greater than 100 or less than 0");
    }

    return 0;

}
