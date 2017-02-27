/*
 ============================================================================
 Name        : 3_29.c
 Author      : Abdulrahman
 Created on  : 22 Feb ,22
 ============================================================================
 */

#include <stdio.h>

int main( void )
 {
      unsigned int row = 10; // initialize row
      unsigned int column; // define column

     while ( row >= 1 ) 
     {   // loop until row < 1
         column = 1; // set column to 1 as iteration begins
         while ( column <= 10 )
	 { // loop 10 times
             printf( "%s", row % 2 ? "<": ">" ); // output
             ++column; // increment column
         } // end inner while

        --row; // decrement row
        puts( "" ); // begin new output line
     }  // end outer while
 return 0 ;
 } // end function main
