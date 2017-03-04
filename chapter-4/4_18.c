/*
 ============================================================================
 Name        : 4_18.c
 Author      : Abdulrahman
 Description : Write a program that reads five numbers (each between 1 and 30).
               For each number read, your program should print a line containing
               that number of adjacent asterisks. For example, if your program reads
                the number seven, it should print *******.
Created on   : 4 Mar ,2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number = 0;
	int counter = 0 ;
	// the program will exit when counter reaches 5
	while (counter != 5)
	{
	    printf("Enter a number between 1 - 30:");
	    scanf("%d",&number);
	    for ( ; number > 0 ; --number)
	    {
		    printf("*");
	    }
	    printf("\n");
	    counter++;
	}
	return 0;
}
