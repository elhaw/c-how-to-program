/*
 ============================================================================
 Name        : 2_31.c
 Author      : Abdulrahman
 Description :  program that calculates the squares and cubes of
                the numbers from 0 to 10 and uses tabs to print
                the following table of values:
Created      : Feb 11 , 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i = 0;
	printf("number  square   cube\n");
	for( i = 0 ; i < 11 ; i++)
	{
		printf("%d      %3d %7d\n",i,i*i,i*i*i);
	}
	return 0;
}
