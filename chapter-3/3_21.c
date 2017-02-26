/*
 ============================================================================
 Name        : 3_21.c
 Author      : Abdulrahman
 Description : a program that demonstrates the difference
               between predecrementing and postdecrementing
               using the decrement operator --.
Created on   : 21 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	//declare a variable x and assign 5 to it
	int x = 5 ;
	printf("The value of  x[%d] before changing it is :%d\n",x,x);
	puts("==============================================");
	puts("In postdecrement the variables is changed first then used ");
	printf("The value of  x[%d] after decrement is :%d\n",x,--x);
	puts("==============================================");
        puts("In Post decrement x-- is the value of previous x ");
        puts("and when it is used after that it will be decremented by 1. ");
	printf("\nThe value of  x[%d] and after decrement is (x--) :%d\n",x,x--);
	printf("The value of  x[%d] and after decrement is (x--) :%d\n",x,x--);
	printf("The value of  x[%d] and after decrement is (x--) :%d\n",x,x--);
	printf("The value of  x[%d] and after decrement is (x--) :%d\n",x,x--);


	return 0;
}
