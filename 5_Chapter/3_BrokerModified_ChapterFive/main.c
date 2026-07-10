#include <stdio.h>

int main(void) {

    float comission;
    float value;
	float numberOfShare;
	float pricePerShare;
	float rival;

	printf("Number of share: ");
	scanf("%f", &numberOfShare);

	printf("Price per share: ");
	scanf("%f", &pricePerShare);


	value = numberOfShare * pricePerShare;


	if (numberOfShare <= 2000) {
		rival = 33.00f + 0.03f * numberOfShare;
	} else {
		rival = 33.00f + 0.02f * numberOfShare;
	}

    if (value < 2500.00f) {
    	comission = 30.00f + 0.17f * value;
    }
    else if (value < 6250.00f) {
    	comission = 56.00f + .0066f * value;
    }
    else if (value < 20000.00f) {
    	comission = 76.00f + .0034f * value;
    }
    else if (value < 50000.00f) {
    	comission = 100.00f + .0022f * value;
    }
    else if (value > 50000.00f) {
    	comission = 155.00f + .0011f * value;
    }
    else {
    	comission = 255.00f + .0009f * value;
    }

    if (comission < 39.00f) {
    	comission = 39.00f;
    }

    printf("Comission: $%.2f\n", comission);
    printf("Rival Comission: $%.2f\n", rival);


    return 0;
}

// Had to look up question confused me.

