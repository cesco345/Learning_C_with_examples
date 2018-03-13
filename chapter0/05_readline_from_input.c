/*
Program - Taken from Objective-C Programming-Pre-Course Workbook ==Readline from input== C program 
Author - Cesco
Date - 3/10/2018

===must give the compiler the flag -lreadline or the compiler will give you an error.
*/


#include <readline/readline.h>
#include <stdio.h>

int main(int argc, const char * argv[])
{
    printf("Who is cool? ");
    const char *name = readline(NULL);
    printf("%s is cool!\n\n",name);
    return 0;
}
