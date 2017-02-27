/*
 ===============================================================================
 Name        : 4_16b.c
 Author      : Abdulrahman

 Description : program that prints the following patterns separately,
               one below the other. Use for loops to generate the patterns.
               All asterisks (*) should be printed by a single printf statement
               of the form printf( "%s", "*" ).
Created on    : 27 ,Feb 2017
 ===============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int row = 0 ;
	int coloum = 0;
	int height = 0 ;
	printf("Enter the Height of the triangle:");
	scanf("%d",&height);
	for (row = 0 ; row < height ;row++)

	{
		for (coloum = height ; coloum > 0 ; coloum--)
		{
			if (row >= coloum)
			{
		        printf(" ");
			}
			else
			{
				printf("*");
			}
		}
		printf("\n");
	}
	return 0;
}
