#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
The name of this program is myrand.c . This program will produce a table of unique sequence of random integers, determined 
by the input of rows chosen by the user.
*/

int main ()
{
	int i, seed;
    printf("Welcome to myrand.\n");
	printf("This program will produce a five column table of random numbers.\n");
	printf("Please enter the number of rows you would like: ");
	scanf("\n%d", &seed);

    srand(time(NULL));

	for (i=0 ; i < seed ; ++i)
  	{
	printf("%15d%15d%15d%15d%15d\n", rand(), rand(), rand(), rand(), rand());
  	}
	printf("Thank you for using myrand. Bye!\n\n");
	return 0;
}
