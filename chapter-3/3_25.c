/*
 ============================================================================
 Name        : 3_25.c
 Author      : Abdulrahman
 Version     :
 Copyright   : Your copyright notice
 Description : a program that utilizes looping to produce the some
             values
 Created on  :21 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int counter = 3;
    printf("A\tA+2\tA+4\tA+6\n");
    for (counter = 3 ;counter < 16 ; counter = counter+3)
    {
	printf("%d\t%d\t%d\t%d\n",counter,counter+2,counter+4,counter+6);
    }
    return 0;
}
