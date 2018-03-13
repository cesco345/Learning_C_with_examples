/*
Program - Taken from Objective-C Programming-Pre-Course Workbook ==for loop with continue== C program 
Author - Cesco
Date - 3/10/2018
*/


#include <stdio.h>

int main(int argc, const char * argv[])
{
    int i;
    for (i = 0; i < 12; i++) {
        if (i % 3 == 0) {
            continue;
        }
    
        printf("Checking i = %d\n", i);
        if (i + 90 == i * i) {
            break;
        }
    }
    
    printf("The answer is %d.\n", i);

    return 0;
}
