#include <stdio.h>

int main(void) {
    char name;
    char first;

    int letters = 0;

    char space;


    printf("Enter a first and last name: ");

    first = getchar();


    // while ((name = getchar()) != ' ') {
    //     name = '\b';
    //     printf("%c", name);
    //
    // }


    for (;;) {
        name = getchar();

        if (name == '\n') {
            break;
        }


        if (name == ' ') {
        
            for (;;) {
                name = '\b';

                if (name == ) {
                    break;
                }
            }

        }

        printf("%c", name);
        letters += 1;
    }



    char a = '\b';
    int i = a;

    printf("%d",i);



    printf(", %c", first);





    return 0;
}