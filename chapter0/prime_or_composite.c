//Write a program to determine whether a given number is a prime or a composite number.

#include <stdio.h>

int main()
{
    int flag = 0, i, num;

    printf("\n Enter any number : ");
    scanf("%d", &num);

    for(i=2; i<num/2;i++)
    {
        if(num%i == 0)
        {
            flag =1;
            break;
        }
    }

if(flag == 1)
    printf("\n %d is a composite number \n", num);
else
    printf("\n %d is a prime number \n", num);

return 0;
}
