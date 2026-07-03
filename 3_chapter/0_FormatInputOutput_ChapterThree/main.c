

#include <stdio.h>

int main(void)
{

    int num1;
    int denom1;
    int num2;
    int denom2;
    int result_num;
    int result_denom;

    printf("Enter first fraction: ");
    scanf("%d / %d", &num1, &denom1);

    printf("Enter second fraction: ");
    scanf("%d / %d", &num2, &denom2);

    result_num = num1 * denom2 + num2 * denom1;

    result_denom = denom1 * denom2;

    printf("The sum is %d/%d\n", result_num, result_denom);






    return 0;

}
// %m.pX
// %-m.pX
// m and p are integer constanst
// X is a letter
// e.g %10.2f is 20 is m 3 if p and X is f ||
// %10f 10 is m and the p with the period missing is missing
// %.2f p is 2 and m is missing
//int i;
//float x;

//i = 40;
//x = 839.21f;

//printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
//printf("|%10.3f|%10.3e|%-10g|\n", x, x, x);


// escape sequences:

// /a - alert bell
// /b - backspace
// /n - new line
// /t horizontal tab

//    printf("Item\tUnit\tPurchase\n\tPrice\tDate\n");

//    printf("\" Hello! \"");

//    int num1;
//    int denom1;
//    int num2;
//    int denom2;
//    int result_num;
//    int result_denom;

//    printf("Enter first fraction: ");
//    scanf_s("%d///%d", &num1, &denom1);

//    printf("Enter second fraction: ");
//    scanf_s("%d//%d", &num2, &denom2);

//    result_num = num1 * denom2 + num2 * denom1;

//    result_denom = denom1 * denom2;

//    printf("The sum is %d///%d\n", result_num, result_denom);
//
//



