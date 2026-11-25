#include <stdio.h>
#include <ctype.h>

int main(void) {
    char lastName;
    char firstInital;
    char space;


    printf("Enter a first and last name: ");

    firstInital = getchar();

    firstInital = toupper(firstInital);

    for (;;) {
        lastName = getchar();

        if (lastName == '\n') {
            break;
        }

        if (lastName == ' ') {
            space = lastName;
        }

        if (space == ' ' && lastName != ' ') {
            printf("%c", lastName);
        }
    }


    printf(", %c.", firstInital);

    return 0;
}
