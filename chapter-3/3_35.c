/*
 ============================================================================
 Name        : 3_35.c
 Author      : Abdulrahman
 Description : Input an integer (5 digits or fewer)
               containing only 0s and 1s (i.e., a “binary” integer)
               and print its decimal equivalent.
 Created on   :22 Feb,2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int binary_number = 0 ;
	int decimal_number =0;
	int digit = 0 ;
	int counter = 0 ;
	int weight = 1 ;
	printf("please Enter binary number at most 5 digits:");
	scanf("%d",&binary_number);
	for (counter = 0 ; counter < 5 ; counter++)
	{
		if (counter == 0)
		{
	    	    digit = binary_number% 10 ;
		}
		else
		{
		    binary_number = binary_number /10;
	            digit = binary_number% 10 ;
		}
	decimal_number = decimal_number + digit* weight ;
	weight = weight *2;
	}
	printf("%d\n",decimal_number);
	return 0;
}
