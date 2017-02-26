/*
 ============================================================================
 Name        : 3_19.c
 Author      : Abdulrahman
 Description : The preceding formula assumes that rate is the annual interest rate,
               and therefore includes the division by 365 (days). A program that will 
	       input principal , rate and days for several loans, and will calculate
	       and display the simple interest for each loan,
Created on   : 21 Feb, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //initialize varibles
    float interest,principal,rate = 0 ;
    int days = 0;
    printf("Enter loan principal (-1 to end):");
    scanf("%f",&principal);
    while (principal != -1)
    {
    	printf("Enter interest  rate:");
    	scanf("%f",&rate);
    	printf("Enter term of the loan in days:");
    	scanf("%d",&days);
	//Formula to calaculate the interest
    	interest = (principal * rate * days) /(365);
    	printf("The interest charge is $%.2f\n",interest);
    	printf("\nEnter loan principal (-1 to end):");
    	scanf("%f",&principal);
    }
	return 0;
}
