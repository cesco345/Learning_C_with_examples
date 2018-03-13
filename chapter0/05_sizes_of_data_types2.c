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
    
    printf("Now i is %d\n", i);
    printf("An int is %zu bytes\n", sizeof(i));
    printf("A pointer is %zu bytes\n", sizeof(addressOfI));
    return 0;
}
