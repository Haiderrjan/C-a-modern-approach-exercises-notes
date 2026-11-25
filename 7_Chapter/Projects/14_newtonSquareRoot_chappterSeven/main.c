#include <stdio.h>
#include <math.h>

int main(void) {


    double y = 2;

    double a = 3;

    double avg;


    avg = 0.5 * (1.732051 + 3/1.732051);

    printf("%f\n", fabs(avg));

    double i =  1.75  - 1.73214;
    printf("%lf\n", i);

    if ( 1.75  - 1.73214 < .00001 ) {



        printf("%lf\n", i);
        printf("it is less than the product\n");
    }

    /// the formula is in the book
    /// do abs to get precise value only input once the value terminates
    /// for loop would do and a double :)






    // for (;;) {
    //
    //     if (y < 0.00001) {
    //         break;
    //     }
    // }

    return 0;
}
