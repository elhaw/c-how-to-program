/*
 ============================================================================
 Name        : 3_24.c
 Author      : Abdulrahman
 Description : a program that uses looping to print the following table of values.
               Use the tab escape sequence, \t, in the printf statement to separate
               the columns with tabs.
 Created on  :21 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int counter = 1;
    printf("N\t10*N\t100*N\t1000*N\n");
    for (counter = 1 ;counter < 11 ; counter++)
    {
        printf("%d\t%d\t%d\t%d\n",counter,counter *10,counter*100,counter*1000);
    }
    return 0;
}
