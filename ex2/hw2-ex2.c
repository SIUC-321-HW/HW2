/*
Alexander Rogers
9/18/23
hw2-ex2: Coordinates in a Circle
*/

#include <stdio.h>

// Used macro from lab 1 example
#define SQUARE(s) (s * s)

int main() {
    float x, y;

    // Takes values from user
    printf("Input values for x and y: ");
    scanf("%f %f", &x, &y);

    // Shows what the results of the squared varibles
    printf("Squared varibles added = %f\n", SQUARE(x) + SQUARE(y));

    /*
    Since r = x^2 + y^2, if we get a value under 1 then its inside, if the value is close to one then its on the border
    (Had to use approximations because circles dont translate completely correctly on Cartesian Coordinates), 
    if the value is bigger than 1 then its outside the circle.
    */

    if(SQUARE(x) + SQUARE(y) < 0.9995) {
        printf("inside\n");
    }
    else if (SQUARE(x) + SQUARE(y) > 0.9995 && SQUARE(x) + SQUARE(y) < 1.0005) {
        printf("border\n");
    }
    else {
        printf("outside\n");
    }
    
}