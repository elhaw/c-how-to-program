/*
 ============================================================================
 Name        : 4_19.c
 Author      : Abdulrahman
 Description : Write a program that reads a series of pairs of numbers as follows:
               a) Product number
               b) Quantity sold for one day
               Your program should use a switch statement to help determine
               the retail price for each product.
               Your program should calculate and display the total retail value
                of all products sold last week.
 Created on  : 4 Mar ,2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int quantity,product_number  = 0 ;
    double total_retail = 0 ;
    printf("Enters pairs of product number and quantity\n");
    printf("Enter -1 to exit");
    scanf("%d",&product_number);
    while (product_number != -1)
    {
	scanf("%d",&quantity);
	switch(product_number)
	{
	case 1 :
		total_retail = total_retail + quantity * 2.98;
		break;
	case 2 :
		total_retail = total_retail + quantity * 4.50;
		break;
	case 3 :
		total_retail = total_retail + quantity * 9.98;
		break;
	case 4 :
		total_retail = total_retail + quantity * 4.49;
		break;
	case 5 :
		total_retail = total_retail + quantity * 6.87;
		break;
	}
	scanf("%d",&product_number);
    }
	printf("Total retail is : %.2f",total_retail);
    return 0 ;
}
