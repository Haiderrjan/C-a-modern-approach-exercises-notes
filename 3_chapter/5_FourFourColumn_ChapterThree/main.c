#include <stdio.h>


int main(void) {

    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
    int h;
    int i;
    int j;
    int k;
    int l;
    int m;
    int n;
    int o;
    int p;


    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i, &j, &k, &l,&m, &n, &o, &p);

    int firstRow = a + b + c + d;
    int secondRow = e + f + g + h;
    int thirdRow = i + j + k + l;
    int fourthRow = m + n + o + p;


    int firstCol = a + e + i + m;
    int seconCol = b + f + j + n;
    int thirdCol = c + g + k + o;
    int fourthCol = d + h + l + p;

    int diagonalSumR = a + f + k + p;
    int diagonalSumL = d + g + j + m;


    printf("%d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n%2d %2d %2d %2d\n", a, b, c, d,e ,f, g,h, i, j, k, l, m, n, o, p);
    printf("\n");
    printf("Row sums: %d %d %d %d\n", firstRow, secondRow, thirdRow, fourthRow);
    printf("Column sums: %d %d %d %d\n", firstCol, seconCol, thirdCol, fourthCol);
    printf("Diagonal sums: %d %d\n", diagonalSumR, diagonalSumL);


}

// 16 3 2 13 5 10 11 8 9 6 7 12 4 15 14 1