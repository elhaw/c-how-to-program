/*
 ============================================================================
 Name        : 3_45(b).c
 Author      : Abdulrahman
 Description : Write a program that reads a nonnegative integer and computes and prints
               its factorial.Write a program that estimates the value of the mathematical
               constant e. formula:
Created on   : 23 Feb ,2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//function prototype
int calc_factorial (int number);


int main(void)
{
    int terms = 20 ;
    float eular = 0;
    int counter =0 ;
    //calculation formula
    for ( counter = 0 ; counter < terms ;counter++ )
    {
       	eular = eular + 1./calc_factorial(counter);
    }
    //printing result
    printf("Eular constant is equal to:%f\n",eular);
    return 0 ;
}

//function defintion
int calc_factorial (number)
{
    //check if number is zero
    int factorial = 1 ;
    if (number == 0 )
    {
 	return factorial;
    }
    //check if the number  > zero
    else
    {
  	while(number !=0)
	{
            //calculate factorial
	    factorial = factorial * number;
	    --number;
	}
    }
    return factorial ;
}
