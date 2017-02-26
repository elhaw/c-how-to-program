/*
 ============================================================================
 Name        : 3_17.c
 Author      : Abdulrahman
 Created on  : 21 Feb, 2017
 Description : a program that will determine if a department store
               customer has exceeded the credit limit on a charge account
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int account_number = 0;
	float beginning_balance,total_charge,total_credit,credit_limit,balance;
	while (account_number !=-1)
	{
            //Enter account Number
            printf("Enter account number (-1 to end):");
	    scanf("%d",&account_number);
	    //exit if user entered -1
	    if (account_number==-1)
	    {
	        break;
	    }
	    //Enter beginning balance
	    printf("Enter beginning balance:");
	    scanf("%f",&beginning_balance);
	    //total charge
	    printf("Enter total charges:");
	    scanf("%f",&total_charge);
	    //total credit
	    printf("Enter total credits:");
	    scanf("%f",&total_credit);
	    //credit limit
	    printf("Enter  credit limit:");
	    scanf("%f",&credit_limit);
	    balance = beginning_balance + total_charge - total_credit;
	    //print if balance exceeds the limit
	    if (balance > credit_limit)
	    {
	    	printf("Account: %d",account_number);
	    	printf("\nCredit:%f",credit_limit);
	    	printf("\nBalance:%.2f ",balance);
	    	printf("\nCredit Limit Exceeded.\n\n");
	    }
	}
	return 0;
}
