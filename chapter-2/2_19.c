/*
 ============================================================================
 Name        : 2_19.c
 Author      : Abdulrahman
 Description : program that inputs three different integers from the keyboard,
              then prints the sum, the average, the product,
              the smallest and the largest of these numbers
 Created on   : Feb 10, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x,y,z;
    printf("Enter three different integers:");
    scanf("%d %d %d",&x,&y,&z);
    printf("Sum is %d",x +y +z);
    printf("\nAverage is %f",(double)(x +y +z)/3);
    printf("\nProduct is %d", x*y*z);
   if (x > y)
   {
       if ( x > z)
       {
           printf("\nLargest is %d",x);
	   if (y > z)
	   {
	       printf("\nSmallest is %d",z);
	   }
	   else
	   {
	       printf("\nSmallest is %d",y);
	   }
       }
       else
       {
           printf("\nLargest is %d",z);
	   if (x > y)
	   {
               printf("\nSmallest is %d",y);
	   }
	   else
	   {
	       printf("\nSmallest is %d",x);
	   }
       }
    }
    else if ( y > x)
    {
        if (y > z)
        {
	    printf("\nLargest is %d",y);
            if (x > z)
            {
                printf("\nSmallest is %d",z);
            }   
	    else
	    {
	        printf("\nSmallest is %d",x);
	    }
        }
        else
        {
            printf("\nLargest is %d",z);
            printf("\nSmallest is %d",x);
    
        }   
    } 

	return 0;
}
