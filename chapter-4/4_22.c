/*
 ============================================================================
 Name        : 4_22.c
 Author      : Abdulrahman
 Description : Edit code in figure 4.7 to find the average
 Created on  : 4 Mar, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


// function main begins program execution
int main(void)
{
    setvbuf (stdout, NULL, _IONBF, 0);
   int grade; // one grade
   unsigned int aCount = 0; // number of As
   unsigned int bCount = 0; // number of Bs
   unsigned int cCount = 0; // number of Cs
   unsigned int dCount = 0; // number of Ds
   unsigned int fCount = 0; // number of Fs
   puts( "Enter the letter grades."  );
   puts( "Enter the charchter [e] to end input.");
   // loop until user types end-of-file key sequence
   while ( (grade = getchar()  ) != 'e' )
   {

      // determine which grade was input
      switch ( grade )
      { // switch nested in while
          case 'A':
          case 'a':
             ++aCount; // increment aCount
              break;
          case 'B':
          case 'b':
        	  ++bCount; // increment aCount
        	  break;
          case 'C':
          case 'c':
        	  ++cCount; // increment aCount
        	  break;
          case 'D':
          case 'd':
        	  ++dCount; // increment aCount
        	  break;
          case 'F':
          case 'f':
        	  ++fCount; // increment aCount
          break;
          case '\n':
          case '\t':
          case ' ':
        	  break;
          default:
        	  printf( "%s", "Incorrect letter grade entered." );
              puts( " Enter a new grade." );
              break;
      }
   }
   puts( "\nTotals for each letter grade are:" );
   printf( "A: %u\n", aCount ); // display number of A grades
   printf( "B: %u\n", bCount ); // display number of B grades
   printf( "C: %u\n", cCount ); // display number of C grades
   printf( "D: %u\n", dCount ); // display number of D grades
   printf( "F: %u\n", fCount ); // display number of F grades
   //calculating average grade
   double result,avg ;
   result =( 4 * aCount ) + ( 3 * bCount)+( 2 * cCount)+( 1 * dCount);
   avg = result / (aCount  +  bCount + cCount+ dCount + fCount);
   if (avg  >= 3.7)
   {
	   printf("Average grade is excellence :%f",avg);
   }
   else if (avg >= 3 )
   {
	   printf("Average grade is goodness  :%f",avg);
   }

   else if (avg >= 2 )
   {
        printf("Average grade is adequate   :%f",avg);
   }
   else
   {
  	   printf("Average grade is passable   :%f",avg);
   }
   return 0;
}
