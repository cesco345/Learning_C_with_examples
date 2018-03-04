/*
Program - Working with extern in C 
Author - Cesco
Date - 3/04/2018
*/


#include <stdio.h>
    
int add_numbers( void );               

int  value1, value2, value3;

int add_numbers( void )
    {
        auto int result;
        result = value1 + value2 + value3;
        return result;
    }

int main()
    {
 
        auto int result;       

        value1 = 10;
        value2 = 20;
        value3 = 30;        
        
        result = add_numbers();
        
        printf("The sum of %d + %d + %d is %d\n",
            value1, value2, value3, result);
    }
