/*
Program - Taken from Objective-C Programming-Pre-Course Workbook ==Sizes of data types and bytes== C program 
Author - Cesco
Date - 3/10/2018
*/

int main(int argc, const char * argv[])
{
    int i = 17;
    int *addressOfI = &i;
    printf("i stores its value at %p\n", addressOfI);
    *addressOfI = 89;
    printf("Now the address is %d\n ", i);
   return 0;
}
