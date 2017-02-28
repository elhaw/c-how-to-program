/*
 ============================================================================
 Name        : 2_30.c
 Author      : Abdulrahman
 Version     :
 Description : program that inputs one five-digit number,
               separates the number into its individual digits and
               prints the digits separated from one another
               by three spaces each
Created on   :Feb 10, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number = 42139;
	int digit = number/10000;
	printf("%d   ",digit);
	int weigth = digit* 10000;
	int new  = number - weigth;
	digit = new/1000;
	printf("%d   ",digit);
	weigth = digit * 1000 ;
	new = new- weigth;
	digit = new/100;
	printf("%d   ",digit);
	weigth = digit * 100 ;
	new = new- weigth;
	digit = new/10;
	printf("%d    ",digit);
	weigth = digit * 10 ;
	new = new- weigth;
	digit = new/1;
	printf("%d",digit);

	return 0;
}
