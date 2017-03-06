/*
 ============================================================================
 Name        : 3_34.c
 Author      : Abdulrahman
 Description : The program reads in five-digit integers and determine whether or 
               not it is a plaindrone.
 Created on  : 6 Mar, 2017              
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number = 0;
	printf("Enter A number consist of 5 digits:");
	scanf("%d",&number);
	int last_two_digit = number / 1000;
	int first_two_digits = number % 100 ;
	//Summation of each couple of digits
	 int sum_last_two_digit = (last_two_digit%10)+(last_two_digit/10);
	 int sum_first_two_digits = (first_two_digits%10)+(first_two_digits/10);
	//check if the sum of coiples are equal
	 if (sum_last_two_digit ==sum_first_two_digits)
	{
 	printf("The Number (%d)  is palindrome number ",number);
	}
	else
	{
		printf("ooops!!! (%d)  is not palindrome number ",number);
	}


	return 0;
}
