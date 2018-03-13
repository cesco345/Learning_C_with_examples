/*
Program - Taken from Objective-C Programming-Pre-Course Workbook ==Learning how to work with addresses== C program 
Author - Cesco
Date - 3/10/2018
*/

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i = 17;
    printf("i stores its value at %p\n", &i);
    printf("this function starts at %p\n", main);
    return 0;
}
