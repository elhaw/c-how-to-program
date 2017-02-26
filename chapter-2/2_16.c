/*
 =======================================================================
 Name        : 2_16.c
 Author      : Abdulrahman Elhaw
 Description : program that asks the user to enter two numbers,
               obtains them from the user and prints their sum, product
               , difference, quotient and remainder.
Created on   : Feb 10, 2017
 =======================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main(void)
{
	float num1,num2;
	printf("please enter the first number:");
	fflush(stdout);
	scanf("%f",&num1);
	printf("please enter the second number:");
	fflush(stdout);
	scanf("%f",&num2);
	printf("The sum is =%1f ",num1+num2);
	printf("\nThe difference is =%1f ",num1-num2);
	printf("\nThe product is    =%f ",num1*num2);
	/*
	 * Modular for float numbers must use math libiray
	 * and use function fmod(float num1,float num2)
	 *
	 */
	printf("\nThe reminder is   =%f ",fmod(num1,num2));
	//cast the result to get the qoutient
	printf("\nThe qoutient is =%d ", (int)(num1/num2));

	return 0;
}
