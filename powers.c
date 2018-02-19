#include<stdio.h>
#include<string.h>

/*
This program will ask the user for two integers.  Then it will calculate the powers
for all of the integers between the input numbers.
*/

int main()
{
printf("\n\nWelcome to powers\n\n");
printf("This program will receive two integers and produce 5 columns representing the integers and then its respective 2nd-5t$

int first_integer = 0;
int last_integer = 0;

printf("Please enter the beginning integer: \n");
scanf("%d", &first_integer);

printf("Please enter the last integer: \n");
scanf("%d", &last_integer);

printf("%13s%13s%13s%13s%13s","Integer", "Square", "3rd Power", "4th Power", "5th Power\n");
printf("%13s%13s%13s%13s%13s", "-------","------", "---------", "---------", "---------\n");

for(int i = first_integer ; i<= last_integer; ++i)
    {
     	printf("%12d %12d %12d %12d %12d\n", i, i*i, i*i*i, i*i*i*i, i*i*i*i*i);
    }
printf("\n\nThank you for using powers. Bye!\n\n");


}

