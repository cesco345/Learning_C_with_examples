//Write a program to find whether a number is even or odd.
#include <stdio.h>

int main()
{
    int a;
    printf("\n Enter the value of a : ");
    scanf("%d", &a);

    if(a%2==0)
        printf("\n %d is even \n", a);
    else
        printf("\n %d is odd \n", a);

    return 0;
}
