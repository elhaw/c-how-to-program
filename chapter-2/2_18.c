/*
 ============================================================================
 Name        : 2_18.c
 Author      : Abdulrahman
 Copyright   : Your copyright notice
 Description : program asks the user to enter two integers obtains thenumbers
               from the user, then prints the larger number- followed by the 
	       words “is larger.” If the numbers are equal, print the message
	       “These numbers are equal .” Use only the single-selectionform 
	       of the if statement you learned in this chapter.
Created on   : Feb 10, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float a,b;
	printf("Enter the first number:");
	scanf("%f",&a);
	printf("Enter the second number:");
	scanf("%f",&b);
	if (a > b )
	{
		printf("The Number %f is larger than %f",a,b);
	}
	else if (a==b)
	{
		printf("These numbers are equal");
	}
	else
	{
		printf("The Number %f is larger than %f",b,a);
	}
	return 0;
}
