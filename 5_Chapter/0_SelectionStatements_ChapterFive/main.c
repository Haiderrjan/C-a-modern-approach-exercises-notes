#include <stdbool.h>
#include <stdio.h>


int main(void) {

	 int areaCode;

	printf("Enter an area code in america: ");

	scanf("%d", &areaCode);

	switch (areaCode) {
		case 229:
			printf("Albany\n");
			break;
		case 404: case 470: case 770:
			printf("Atlanta\n");
			break;
		case 678: case 762:
			printf("Columbus\n");
			break;
		case 912:
			printf("Savannah\n");
			break;
			default:
			printf("Area code not Recognized\n");
	}





	return 0;






	//
	//
	//
	// int month;
	// int day;
	// int year;
	//
	// printf("Enter date (dd/mm/yy): ");
	// scanf("%d / %d / %d", &day, &month, &year);
	//
	// printf("Dated this %d", day);
	// switch (day) {
	// case 1: case 21: case 31:
	// 	printf("st");
	// 	break;
	// case 2: case 22:
	// 	printf("nd");
	// 	break;
	// case 3: case 23:
	// 	printf("rd");
	// 	break;
	// default:
	// 	printf("th");
	// 	break;
	// }
	// printf(" day of ");
	//
	// switch (month) {
	// case 1: printf("January");   break;
	// case 2: printf("February");  break;
	// case 3: printf("march");	 break;
	// case 4: printf("April");	 break;
	// case 5: printf("May");		 break;
	// case 6: printf("June");		 break;
	// case 7: printf("July");		 break;
	// case 8: printf("August");	 break;
	// case 9: printf("September"); break;
	// case 10: printf("October");	 break;
	// case 11: printf("November"); break;
	// case 12: printf("December"); break;
	// }
	//
	// printf(", 20%.2d.\n", year);
	//


}





/* Calculates a broker's commision using if and if cascade (else-if) statments */

//float comission;
//float value;
//
//printf("Enter value of trade: ");
//scanf_s("%f", &value);
//
//
//if (value < 2500.00f) {
//	comission = 30.00f + 0.17f * value;
//}
//else if (value < 6250.00f) {
//	comission = 56.00f + .0066f * value;
//}
//else if (value < 20000.00f) {
//	comission = 76.00f + .0034f * value;
//}
//else if (value < 50000.00f) {
//	comission = 100.00f + .0022f * value;
//}
//else if (value > 50000.00f) {
//	comission = 155.00f + .0011f * value;
//}
//else {
//	comission = 255.00f + .0009f * value;
//}
//
//if (comission < 39.00f) {
//	comission = 39.00f;
//}
//
//printf("Comission: $%.2f\n", comission);