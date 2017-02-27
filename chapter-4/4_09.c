/*
 ============================================================================
 Name        : 4_9.c
 Author      : Abdulrahman
 Description : a program that sums a sequence of integers. Assume that the first
               integer read with scanf specifies the number of values remaining
               to be entered. Your program should read only one value each time
               scanf is executed.
Created on   : 26 Feb ,2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// initialize variables `
	int size = 0;
	int counter = 0 ;
	int numbers = 0;
	int sum = 0;
	printf("Enter how many numbers to add:");
	scanf("%d",&size);
    while (counter < size)
    {
    	printf("Enter Number [%d]:",counter);
    	scanf("%d",&numbers);
    	sum = sum + numbers;
    	//termination if counter exceed size
    	counter++;
    }
    //print the sum
    printf("The sum is :%d",sum);
	return 0;
}
