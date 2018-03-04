/*
Program - Working with extern in C 
Author - Cesco
Date - 3/04/2018
*/

#include <stdio.h>

int x = 50;

int main()
{
    int x = 100;
    {
        extern int x;
        printf("x = %d\n", x);
    }
    printf("x = %d\n", x);
    return 0;

}

