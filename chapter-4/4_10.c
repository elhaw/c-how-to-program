/*
 ============================================================================
 Name        : 4_10.c
 Author      : Abdulrahman

 Description : Write a program that calculates and prints the average of
               several integers. Assume the last value read with scanf is the
               sentinel 9999. A typical input sequence   might be 10 8 11 7 9 9999
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setvbuf (stdout, NULL, _IONBF, 0);
	int counter;
	float sum,avg,number= 0 ;
	//loop will exit when user input number is 9999.
	while (number != 9999)
	{
	    sum = sum + number;
        printf("Enter Number [%d]:",counter);
   	    scanf("%f",&number);
	    counter++;
	}
	// counter-1 to exclude the last value "9999".
	avg = sum/(counter-1) ;
	printf("The average is :%.2f",avg);
	return 0;
}
