/*
Program - How to comment a program in C
Author - Cesco
Date - 3/04/2018
*/

#include <stdio.h>

int main()
{
    /*int value=100;*/

    char *p = "00-14-22-01-23-45";
    char MAC[] = "00-14-22-01-23-45";
    printf("The MAC address of the device is: %s\n", p);
    printf("The MAC address of the device as an array is : %s\n", MAC);
    printf("Value is %d : " /*, value*/);
    return 0;
}
