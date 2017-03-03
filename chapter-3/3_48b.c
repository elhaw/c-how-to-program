/*
 ============================================================================
 Name        : 3_48b.c
 Author      : Abdulrahman
 Description : that it may be transmitted more securely. All the data is transmitted
               as four-digit integers. Your application should read a four-digit
               integer entered by the user and encrypt it as follows: Replace each digit
               with the result of adding to the digit and getting the remainder after
               dividing the new value by 10. Then swap the first digit with the third,
                and swap the second digit with the fourth. Then print the encrypted integer.
                Write a separate application that inputs an encrypted four-digit integer
                and decrypts it (by reversing theencryption scheme) to form the original number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int main ()
{
    int counter,number,digit= 0 ;
    int first_digit,second_digit,third_digit,fourth_digit;
    printf("Enter a 4-digit encrypted integer number:");
    scanf("%d",&number);
    for (counter = 0 ; counter < 4 ; counter++)
    {
 	//digits separation
	digit = number % 10 ;
	number = number /10;
	/*
	 * decryption if the digit (reminder =7 or 8 or 9)
	 * so in this range we will not add 10
	 */
	if (digit >=7 && digit <=9 )
	{
            digit = digit - 7;
	}
	else
	{
 	    digit = (digit + 10) - 7;
	}
	/*
	 *  swapping the first digit with the third
         *  the second with the fourth.
	 */
	switch(counter)
	{
    	    case 0 :third_digit  = digit ;
	    break;
	    case 1 :fourth_digit  = digit ;
	    break;
	    case 2 :first_digit  = digit ;
	    break;
	    case 3 :second_digit  = digit ;
	}
    }
    printf("The decrypted number is :%d%d%d%d",fourth_digit,third_digit,second_digit,first_digit);
    return 0 ;
}
