/*
Calculates the circumference and area of a circle, given a radius.
*/

#include<stdio.h>

#define PI 3.14159      // defines the PI constant used in calculations

int main(void)
{
    // radius variable holds the user entered floating-point radius
    float radius = 0.0;

    // reading information from the user through stdin
    // asks the user for the radius of a circle, saving the value
    // as a floating-point number into the radius variable
    printf("please enter the radius of a circle: ");
    scanf("%f", &radius);

    // calculate the circumference and area of the circle with the
    // user-entered radius to calculate
    float circum = (radius * 2) * PI;
    float area = (radius * radius) * PI;

    // printing information to the user through stdout
    // print the corresponding circumference and area of the circle
    // entered by the user as floating-point numbers
    printf("the circumference of your circle is: %.5f\n", circum);
    printf("the area of your circle is: %.5f", area);

    return 0;
}
