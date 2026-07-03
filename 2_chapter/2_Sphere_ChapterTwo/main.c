

#include <stdio.h>

# define PI 3.14f

int main(void)
{

    // this is hard coded:

    //float volume;
    //float radius = 10.0;

    //volume = 4.0f / 3.0f * PI * radius * radius * radius;

    //printf("Volume of this sphere that has a radius of: %.2f is %.2f\n", radius, volume);

    // this is prompting the user:

    float volume;
    float radius;

    printf("Enter a Radius: ");
    scanf("%f", &radius);

    volume = 4.0f / 3.0f * PI * radius * radius * radius;

    printf("Volume of this sphere that has a radius of: %.2f is %.2f\n", radius, volume);




    return 0;


}

