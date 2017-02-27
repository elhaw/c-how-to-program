/*
 ============================================================================
 Name        : 3_32.c
 Author      : Abdulrahman
 Description : program that reads in the side of a square and then prints that
               square out of asterisks. Your program should work for squares of all side sizes
               between 1 and 20
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int row,coloum = 0;
	int size = 0 ;
	printf("Enter square size:");
	scanf("%d",&size);
	for( row = 0 ;row < size ;row ++)
	{
		for(coloum = 0 ; coloum < size ;coloum++)
		{
			if (coloum == 0 || coloum == size-1 || row ==0 || row ==size-1)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
