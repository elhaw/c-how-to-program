/*
 ============================================================================
 Name        : 4_11.c
 Author      : Abdulrahman

 Description : Write a program that finds the smallest of several integers. Assume that
               the first value read specifies the number of values remaining.
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setvbuf (stdout, NULL, _IONBF, 0);
	int counter,number = 0 ;
	printf("Enter first number [%d]:",counter);
	scanf("%d",&number);
	int first_number = number ;
	int smallest_number = number;
	/*
	 * the while will iterate till
	 *counter < the value of the first number
	 *
	 */
    while (counter < first_number)
    {
    	counter++;
    	printf("Enter Number [%d]:",counter);
    	scanf("%d",&number);
    	if (smallest_number > number )
    	{
    		smallest_number = number;
    	}

    }
    //print the smallest
    printf("The smallest number is:%d",smallest_number);
    return 0;
}
