/*
 ============================================================================
 Name        : 3_39.c
 Author      : Abdulrahman
 Description : Write a program that displays the following checkerboard pattern:
 Created on  : 22 Feb 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int row = 0 ;
	int coloum = 0 ;
	for (row =1 ; row < 9 ; row++)
	{
		for (coloum =0 ; coloum <= 8 ; coloum++)
		{
			printf( "%s", "* " );
		}
		puts("");
		if ( row % 2 !=0)
		{
			printf( "%s", " " );
		}

	}

	return 0;
}
