/*
Program - Taken from Objective-C Programming-Pre-Course Workbook first C program 
Author - Cesco
Date - 3/10/2018
*/


#include <stdio.h>

int main (int argc, const char * argv[])
{
    // Declare the variable called 'weight' of type float
    float weight;
    // Store a number in that variable
    weight = 14.2;
    // Log it to the user
    printf("The turkey weighs %f.\n", weight);
    // Declare another variable of type float
    float cookingTime;
    // Calculate the cooking time and store it in the variable
    // In this case, '*' means 'multiplied by'
    cookingTime = 15.0 + 15.0 * weight;
    // Log that to the user
    printf("Cook it for %f minutes.\n", cookingTime);
    
    return 0;
}
