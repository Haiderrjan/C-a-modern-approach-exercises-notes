#include <stdio.h>

int main(void) {

    int prefix;
    int identifier;
    int publisher;
    int item;
    int digit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&prefix, &identifier, &publisher, &item, &digit);

    printf("GS1 prefix: %d\n", prefix);
    printf("Groupd identifier: %d\n", identifier);
    printf("publisher code: %d\n", publisher);
    printf("Item Number: %d\n", item);
    printf("Check digit: %d\n", digit);





    return 0;
}