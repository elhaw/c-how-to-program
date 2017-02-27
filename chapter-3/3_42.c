/*
 ============================================================================
 Name        : 3_42.c
 Author      : Abdulrahman
 Description : What’s wrong with the following statement?
               Rewrite it to accomplish what the programmer
               was probably trying to do.
               printf( "%d", ++( x + y ) );
Created on   : 22 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x = 1 ;
	int y = 2 ;
	int sum = x+y ;
	/*	printf( "%d", ++( x + y ) );
	 * The programmer wants to add x to y and use
	 * predecrment operator but it is invalid as
	 * it is unary operator and operate on single operand.
	 * so we declare another variable and name it sum
     */
	printf( "%d", ++(sum) );
	return 0;
}
