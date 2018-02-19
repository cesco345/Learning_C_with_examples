#include <stdio.h>
#include <stdlib.h>

/*
The name of this program is weightem.c . The program will allow the user to convert metric weights
 to english or english weights to metric. 
*/

int main ()
{
    float pounds, kilos, ounces, grams; 
    int selection;

    printf("Welcome to weightem.\n");
    printf("This program will allow the user to convert metric weights to english, and english to metric.\n");
    printf("You must choose a number between 1-4.");
    printf("\n1. Pounds to Kilos\n");
    printf("2. Kilos to Pounds\n");
    printf("3. Ounces to Grams\n");
    printf("4. Grams to Ounces\n");
    printf("5. Exit - Do nothing (default)\n");
    printf("Please enter your selection: ");
    scanf("\n%d", &selection);
	
    switch (selection)
	{
	case 1:
		printf("Enter the number of pounds to convert to kilos : ");
		scanf("%f", &pounds);
		kilos = pounds * 0.4536;
		printf("Answer:  %f pounds is %f kilos.", pounds, kilos);
	    break;

    case 2:
        printf("Enter the number of kilos to convert to pounds: ");
        scanf("%f", &kilos);
        pounds = kilos * 2.20462262 ;
        printf("Answer:  %f kilos is the same weight as %f pounds.", kilos, pounds);
        break;

    case 3:
        printf("Enter the number of ounces to convert to grams: ");
        scanf("%f", &ounces);
        grams = ounces * 28.35;
        printf("Answer:  %f ounces is %f grams.", ounces, grams);
        break;

    case 4:
		printf("Enter the number of grams to convert to ounces: ");
		scanf("%f", &grams);
        ounces = grams * 0.035274;
        printf("Answer:  %f grams is %f ounces.", grams, ounces);
        break;        

	default:
		printf("Your choice is invalid.\n");

    } 


	printf("\n\nThank you for using weightem. Bye!\n\n");
	return 0;
}
