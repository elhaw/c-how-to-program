/*
 ============================================================================
 Name        : 2_32.c
 Author      : Abdulrahman
 Description :Body Mass Index Calculator)
 Created      :Feb 11, 2017
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float weight,height,MBI ;
    //get inpput
    printf("Enter your Weight in (Kg):");
    scanf("%f",&weight);
    //get height 
    printf("Enter your Height in (Meter):")
    scanf("%f",&height);
    //calculate body mass index
    MBI = (weight/(height*height));
    printf("BMI :%f\n",MBI);
    //print reslut
    printf("Underweight: less than 18.5\n");
    printf("Normal: between 18.5 and 24.9\n")
    printf("Overweight: between 25 and 29.9\n");
    printf("Obese: 30 or greater\n");

	return 0;
}
