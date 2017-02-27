/*
 ============================================================================
 Name        : 3_41.c
 Author      : Abdulrahman
 Description : a program that reads the radius of a circle (as a float value)
               and computes and prints the diameter, the circumference and the area.
               Use the value 3.14159 for π
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float radius,diameter,circumference,area = 0 ;
    const float pi = 3.14159;
    printf("Please Enter radius of the circle:");
    scanf("%f",&radius);
    diameter = radius * 2 ;
    circumference = 2 * pi * radius;
    area = pi * radius * radius;
    //print diameter, circumference and area
    printf("The diameter of the circle is: %f\n",diameter);
    printf("The circumference of the circle is: %f\n",circumference);
    printf("The area of the circle is: %f\n",area);

    return 0;
}
