#include <stdio.h>
#include <stdlib.h>
/**
 * === Spaceship Thrust === 
 *
 * We are working on the man-machine interface of a revolutionary spaceship.
 * Define enumeration constants for different predefined thrust levels, these
 * levels will be used to communicate with the engine controller.
 * 
 * The thrust levels are:
 *  - none:     0
 *  - low:      6
 *  - medium:   10
 *  - high:     15
 *  - maximum:  21
 * 
 * Then launch the rocket!
 * We now want to log the thrust level in some critical points:
 *  - set thrust to none ---> log ready to go level
 *  - set thrust to maximum ---> log take off level
 *  - set thrust to medium ---> log entry into the ionosphere
 *  - set thrust to low ---> log traveling to deep space
 * 
 */

typedef enum{
    NONE= 0,
    LOW= 6,
    MEDIUM= 10,
    HIGH= 15,
    MAXIMUM= 21,

}SpaceshipThrust;

int main()
{
    SpaceshipThrust thrust;

    thrust = NONE;
    printf("Spaceship is ready to go, now thrust is: %d\n",thrust);

    thrust = MAXIMUM;
    printf("Spaceship is taking off into the sky, now thrust is: %d\n", thrust);

    thrust = MEDIUM;
    printf("Spaceship is entering ionosphere, now thrust is: %d\n", thrust);

    thrust = LOW;
    printf("Spaceship is traveling to deep space, now thrust is: %d\n", thrust);

    printf("Bye spaceship!!!");

    return EXIT_SUCCESS;
}