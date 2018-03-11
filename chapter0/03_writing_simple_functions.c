/*
Program - Taken from Objective-C Programming-Pre-Course Workbook working with functions in C 
Author - Cesco
Date - 3/10/2018
*/


#include <stdio.h>

void congratulateStudent(char *student, char *course, int numDays)
{
    printf("%s has done as much %s Programming as I could fit into %d days.\n", student, course, numDays);
}

int main (int argc, const char * argv[])
{
    congratulateStudent("Kate", "Cocoa", 5);
    congratulateStudent("Bo", "Objective-C", 2);
    congratulateStudent("Mike", "Python", 5);
    congratulateStudent("Liz", "iOS", 5);

    return 0;
}
