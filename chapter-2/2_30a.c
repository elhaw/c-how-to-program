/*
 ============================================================================
 Name        : 2_30a.c
 Author      : Abdulrahman
 Description : program that inputs one five-digit number,
               separates the number into its individual digits and
               prints the digits separated from one another
               by three spaces each
Created on   :Feb 10, 2017
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int counter,digit,number = 0 ;
    int first_digit,second_digit,third_digit,fourth_digit,fifth_digit;
    printf("Enter five-digits integer number");
    scanf("%d",&number);
    for (counter = 0 ; counter < 5 ; counter++)
    {
	digit = number% 10 ;
	number = number /10;
	switch(counter)
	{
            case 0 :first_digit  = digit ;
	    break;
	    case 1 :second_digit  = digit ;
	    break;
	    case 2 :third_digit  = digit ;
            break;
	    case 3 :fourth_digit  = digit ;
	    break;
	    case 4 :fifth_digit  = digit ;
	}
    }
    printf("The number separated by spaces : %d %d %d %d %d",fifth_digit,fourth_digit,third_digit,second_digit,first_digit);
	return 0 ;
}
