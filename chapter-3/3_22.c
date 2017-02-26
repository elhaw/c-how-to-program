/*
 ============================================================================
 Name        : 3_22.c
 Author      : Abdulrahman
 Description : a program that utilizes looping to print the numbers from 1 to 10
               side by side on the same line with three spaces between numbers
Created on   : 21 Feb, 21017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int counter = 1 ;
    for(counter = 1 ; counter < 11 ;counter++)
    {
 	printf("%d",counter);
	printf("   ");

   }
   return 0;
}
