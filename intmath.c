/** The program will do the following:
*
*   • Displays a message that indicates what the program will do.
*   • Asks the user to enter 2 integers, one at a time
*   • Receives the 2 integers and places them in separate variables.
*   • Presents on the screen a message indicating the results of all 5 integer math operations
*
*/

#include <stdio.h>
#include <stdlib.h>

/*
*    Main Function
*/

int main(int argc, char *argv[])

{
    int a, b, sum,difference,quotient,product,modulus;
    printf("\nWelcome to intmath.\n");
    printf("\nThis program will give you the addition, difference, quotient, product, and modulus of two integers.\n");
    printf("\nPlease enter the first integer: \n");
    scanf("%d", &a);
    printf("\nPlease enter the second integer: \n");
    scanf("%d", &b);
    sum = a + b;
    printf("\nThe sum of %d and %d is %d\n", a, b, sum);
    difference = a - b;
    printf("\nThe difference between %d and %d is %d\n", a, b, difference);
    quotient = a / b;
    printf("\nThe quotient of %d and %d is %d\n", a, b, quotient);
    product = a * b;
    printf("\nThe product of %d and %d is %d\n", a, b, product);
    modulus = a % b;
    printf("\nThe modulus of %d and %d is %d\n", a, b, modulus);

    printf("\n\nThank you for using intmath. Bye\n\n");

    return 0;

}

