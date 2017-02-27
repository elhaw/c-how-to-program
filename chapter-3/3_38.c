/*
 ============================================================================
 Name        : 3_38.c
 Author      : Abdulrahman
 Description :  a program that reads an integer (5 digits or fewer) and determines and
                prints how many digits in the integer are 7s.
Created on   : 23 Feb, 2017
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int decimal_number =0;
	int counter = 0 ;
	int digit = 0 ;
	int digit_of_value_seven = 0 ;
	printf("please Enter a number at most 5 digits:");
	scanf("%d",&decimal_number);
	for (counter = 0 ; counter < 5 ; counter++)
	{
		if (counter == 0)
		{
			digit = decimal_number% 10 ;
		}
		else
		{
			decimal_number = decimal_number /10;
		    digit = decimal_number% 10 ;
		}
		//you must add break to exit from the infinte loop
		//also you may use if instead
		while (digit ==7 )
		{
			digit_of_value_seven ++ ;
			break;
		}
	}
	printf("digit of value(7) in your number is : %d\n",digit_of_value_seven);
	return 0;
}

