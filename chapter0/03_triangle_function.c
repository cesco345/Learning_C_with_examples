/*
Program - Taken from Objective-C Programming-Pre-Course Workbook triangle function program in C
Author - Cesco
Date - 3/10/2018
*/

#include <stdio.h>
float remainingAngle(float angleA, float angleB)
{
    float angleC= 180.0 - (angleA + angleB); 
    return angleC;
}



// Add your new function here
int main(int argc, const char * argv[])
{
    float angleA = 30.0;
    float angleB = 60.0;
    float angleC = remainingAngle(angleA, angleB);
    printf("The third angle is %.2f\n", angleC);
    return 0;
}
