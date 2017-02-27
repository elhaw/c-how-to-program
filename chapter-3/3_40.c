/*
 ============================================================================
 Name        : 3_40.c
 Author      : Abdulrahman
 Description : Write a program that keeps printing the multiples of
               the integer 2, namely 2, 4, 8, 16, 32, 64, and so on.
               Your loop should not terminate  (i.e., you should
               create an infinite loop).
               What happens when you run this program?
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	signed long  number = 2 ;
	// The program will run and last value is -2147483648
	while(number !=0)
	{
		printf("%d\n",number);
		number = number * 2 ;
	}
	return 0;
}
