/*
 ============================================================================
 Name        : 3_27.c
 Author      : Abdulrahman
 Description : Modify the program in Figure 3.10 to validate its inputs. On any
               input, if the value entered is other than 1 or 2, keep looping until
               the user enters a correct value.
 ============================================================================
 */

 #include <stdio.h>

 int main( void )
 {

    int result; // one exam result
    unsigned int passes = 0; // number of passes
    unsigned int failures = 0; // number of failures
    unsigned int student = 1; // student counter
    // process 10 students using counter-controlled loop
    while ( student <= 10 )
    {
        // prompt user for input and obtain value from user
	 printf( "%s", "Enter result ( 1=pass,2=fail ): " );
	 scanf( "%d", &result );
	 //validating user input
         while(1 > result || result > 2)
         {
             printf( "%s", "Enter result ( 1=pass,2=fail ): " );
             scanf( "%d", &result );
          }
      // if result 1, increment passes
      if (result == 1)
          {
          passes = passes + 1;
          } // end if
          // otherwise, increment failures
      else
      {
       failures = failures + 1;
      } // end else
      student = student + 1; // increment student counter

    } // end while

    // termination phase; display number of passes and failures
    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );

    // if more than eight students passed, print "Bonus to instructor!"
    if ( passes > 8 ) {
    puts( "Bonus to instructor!" );
    } // end if
  return 0 ;
 } // end function main
