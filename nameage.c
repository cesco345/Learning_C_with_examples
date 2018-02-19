#include<stdio.h>
#include<string.h>

/*
This program will ask the user for his name and his age, and then it will tell the user whether is
time to retire or not.

*/
int main()
{
printf("Welcome to nameage\n\n");

char name[50];
int age;
int years_to_retire;

printf("Please enter name: \n");
scanf("%s", &name);

printf("Please enter your age: \n");
scanf("%d", &age);

years_to_retire = 67 - age;

if(age==67)
    {
    printf("Hi %s%s ", name, ", you should retire now.\n");
    }
else if(age<67)
    {
    printf("Hi %s%s%d%s ", name, ", you will retire in ", years_to_retire, " years.\n");
    }
else
   {
    printf("Hi %s%s ", name, ", you should have retired by now.\n");
   }

printf("\nThank you for using nameage. Bye!\n");
   return 0;
}


