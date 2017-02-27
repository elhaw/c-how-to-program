/*
 ============================================================================
 Name        : 4_14.c
 Author      : Abdulrahman
 Description : program that evaluates the factorials of the integers from 1 to 5.
               Print the results in tabular format.
               What difficulty might prevent you from calculating the factorial of 20?
Created on   : 27 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int number  = 0 ;
    int counter = 0 ;
    printf("The number\t!factorial\n");
    for(counter = 1 ; counter <=5 ; ++counter)
    {
    	number = counter ;
    	// reinitializing  factorial for every number
    	int factorial = 1 ;
        while (number != 1 )
        {
    	    factorial = factorial * number;
	    //decrement by one to find (number-1)
    	    --number;
        }
        printf("%d\t\t%d\n",counter,factorial);
    }
	return 0;
}
