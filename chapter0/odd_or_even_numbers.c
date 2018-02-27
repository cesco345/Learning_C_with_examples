//Write a program to find whether a number is even or odd using functions.

#include <stdio.h>

int evenodd(int); //FUNCTION DECLARATION


int main()
{
    int num, flag;
    
    printf("\n Enter the number : ");
    scanf("%d", &num);

    flag = evenodd(num); //FUNCTION CALL
    
    if (flag == 1)
        printf("\n %d is EVEN \n", num);
    
    else
        printf("\n %d is ODD \n", num);

return 0;

}

int evenodd(int a) // FUNCTION HEADER
{       
    if( a % 2 == 0)
        return 1;
    else
        return 0;
}
