#include <stdio.h>

int main(void) {

    int item;
    float price;
    int day;
    int month;
    int year;

    printf("Enter item number: ");
    scanf("%d", &item);


    printf("Enter unit price: ");
    scanf("%f", &price);

    printf("enter purchase date (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);


   printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");


   printf("%d\t\t$ %.2f\t\t%d/%d/%d", item, price, day, month, year);






	return 0;
}