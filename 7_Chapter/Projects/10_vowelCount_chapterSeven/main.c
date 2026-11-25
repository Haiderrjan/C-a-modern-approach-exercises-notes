#include <stdio.h>
#include <ctype.h>

int main(void) {
    char vowels;
    int sum = 0;

    printf("Enter a sentence: ");


    for (;;) {
        vowels = getchar();
        vowels = toupper(vowels);
        if (vowels == '\n') {
            break;
        }
        if (vowels == 'A' || vowels == 'E' || vowels == 'I' || vowels == 'O' || vowels == 'U') {
            sum += 1;
        }
    }
    printf("Your sentence contains %d vowel(s).", sum);

    return 0;
}


//
// while ((vowels = getchar()) != '\n') {
//
//     vowels = toupper(vowels);
//
//
//
//     switch (vowels) {
//         case 'A': case 'E': case 'I': case 'O': case 'U':
//
//             sum += 1;
//
//         default:
//             continue;
//     }
// }
