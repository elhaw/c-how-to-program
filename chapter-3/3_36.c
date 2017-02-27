/*
 ============================================================================
 Name        : 3_36.c
 Author      : Abdulrahman
 Description : program with a while loop that counts from 1 to 1,000,000,000 by 1s.
               Every time the count reaches a multiple of 100,000,000, print that
               number on the screen. Use your watch to time how long each 100 million
               repetitions of the loop takes
 Created on  : 22 ,Feb 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	long long counter =0;
	int i = 0 ;
	for (counter = 0 ; counter < 1000000000 ; counter ++)
	{
		for ( i = 1 ; i <= 10 ; i++)
		{
			if (counter == 100000000 * i )
			{
				printf("Multible of 100 million is : %d\n",counter);
			}
		}

	}
	return 0;
}
