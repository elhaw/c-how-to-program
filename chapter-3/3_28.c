/*
 ============================================================================
 Name        : 3_28.c
 Author      : Abdulrahman
 Description : Its tenary operator if the count %2 is 1 it returns true and
               print stars and if zero it return 0 and print pluses
 Created on  : 21 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	unsigned int count = 1;
	 while ( count <= 10 )
	 {
	 puts( count % 2 ? "****" : "++++++++" );
	  ++count ;
	 }
	return 0 ;
}
