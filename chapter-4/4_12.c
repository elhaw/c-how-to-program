/*
 ============================================================================
 Name        : 4_12.c
 Author      : Abdulrahman
 Description : Write a program that calculates and prints the sum
               of the even integers from 2 to 30
 Created on  :	       26 Feb, 2017
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number = 2 ;
	int sum = 0 ;
	//loop will exit when number is greater than30
	while (number <=30)
	{
	    sum = sum  +number;
	    //increment number by two
	    number = number + 2;
	}
	printf("the sum of even numbers from [2 to 30] is: %d",sum);
	return 0;
}
