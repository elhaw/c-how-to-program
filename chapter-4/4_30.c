/*
 ============================================================================
 Name        : 4_30.c
 Author      : Abdulrahman
 Version     :
 Copyright   : Your copyright notice
 Description : (Replacing switch with if…else) Rewrite the program of Fig. 4.7 by
               replacing the switchstatement with a nested if…else statement;
    	       be careful to deal with the default case properly. Thenrewrite this
   	       new version by replacing the nested if…else statement with a series
   	       of if statements; here, too, be careful to deal with the  default case
   	       properly (this is more difficult than in the nested if…else version).
   	       This exercise demonstrates that switch is a convenience and that any switch
 	       statement can be written with only single-selection statements.
Created on   : 4 Mar, 2017
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>


// function main begins program execution
int main(void)
{
   int grade; // one grade
   unsigned int aCount = 0; // number of As
   unsigned int bCount = 0; // number of Bs
   unsigned int cCount = 0; // number of Cs
   unsigned int dCount = 0; // number of Ds
   unsigned int fCount = 0; // number of Fs
   puts( "Enter the letter grades."  );
   puts( "Enter the EOF character to end input.");
   // loop until user types end-of-file key sequence
   while ( (grade = getchar()  ) != 'e' )
   {

      // determine which grade was input
      if ( grade == 'a')
      {
          ++aCount; // increment aCount
      }
     else if ( grade == 'A')
     {
   	  ++aCount; // increment aCount
     }
     else if(grade == 'b')
     {
     	  ++bCount; // increment aCount
     }
     else if ( grade == 'B')
     {
       	  ++bCount; // increment aCount
     }
     else if(grade == 'c')
     {
      	  ++cCount; // increment aCount
     }
     else if ( grade == 'C')
     {
      	  ++cCount; // increment aCount
     }
     else if(grade == 'd')
     {
      	  ++dCount; // increment aCount
     }
     else if ( grade == 'D')
     {
       	  ++dCount; // increment aCount
     }
     else if(grade == 'f')
     {
    	  ++fCount; // increment aCount
     }
     else if ( grade == 'F')
     {
       	  ++fCount; // increment aCount
     }
     //specifing all error possibilities
     else
     {
  	 if (grade == ' ')
  	 {
  		 //do nothing
  	 }
  	 else if (grade == '\n')
  	 {
  		 //do nothing
  	 }
  	 else
  	 {
      	     //default case
	     //printf( "%s", "Incorrect letter grade entered." );
             puts( " Enter a new grade." );
  	 }
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
   else if (avg > 1.7)
   {
  	   printf("Average grade is passable   :%f",avg);
   }
   else
   {
	   printf("you did not pass");
   }
   return 0;
}
