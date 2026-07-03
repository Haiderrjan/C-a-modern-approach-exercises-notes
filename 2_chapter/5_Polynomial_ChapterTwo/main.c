
#include <stdio.h>

int main(void)
{

    int x;
    int poly;
    printf("Enter a value: ");
    scanf("%d", &x);

    // first formula:

    //poly = 3 * x * x * x * x * x + 2 * x * x * x * x - 5 * x * x * x - x * x + 7 * x - 6;

    // second formula

    poly = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;



    printf("Polynomial value is: %d", poly);
    return 0;


}

