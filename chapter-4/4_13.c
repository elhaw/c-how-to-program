/*
 ============================================================================
 Name        : 4_13.c
 Author      : Abdulrahman

 Description : Write a program that calculates and prints the
               product of the odd integers from 1 to 15.
 Created on  : 26 Feb, 2017
 ============================================================================
 */
#include <stdio.h>

int main(void)
{
	int number = 1 ;
	int product = 1 ;
	//loop will exit when number is greater than 15
	while (number <=15)
	{
		product = product * number;
	    //increment number by two
	    number = number + 2;
	}
	printf("the product of odd numbers from [1 to 15] is: %d",product);
	return 0;
}

