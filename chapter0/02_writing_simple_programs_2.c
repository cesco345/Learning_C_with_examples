/*
Program - Taken from Objective-C Programming-Pre-Course Workbook first C program 
Author - Cesco
Date - 3/10/2018
*/


#include <stdio.h>

int main (int argc, const char * argv[])
{

    int i = 20;
    int j = 25;
    int k = ( i > j ) ? 15 : 25;
    
    if ( 10 < j - k ) { // First expression
        printf("The first expression is true. \n");
    } else if ( j > i ) { // Second expression
        printf("The second expression is true. \n");
    } else {
        printf("Neither expression is true. \n");
    }

    return 0;
}
