/*
 ============================================================================
 Name        : 2_19.c
 Author      : Abdulrahman
 Version     :
 Copyright   : Your copyright notice
 Description :program that reads in the radius
              of a circle and prints the circle’s diameter,
              circumference and area
 Created on   : Feb 10, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
const int pi = 3.14159;
int main(void)
{
	float r = 0 ;
    printf("Enter the radious of the circle in (cm):");
    scanf("%f",&r);
    printf("Diameter of the circle is %f",2 *r);
    printf("\ncircumference of the circle is %f",2*pi*r);
    printf("\nArea of the circle is %f",pi*r*r);



	return 0;
}
