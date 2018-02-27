//Write a program to determine whether the entered character is a vowel or not.

#include <stdio.h>

int main()
{
    char ch;
    printf("\n Enter any character : ");
    scanf("%c", &ch);

    switch(ch)
    {
        case 'A':
        case 'a':
            
            printf("\n %c is a VOWEL \n", ch);
            break;

        case 'E':
        case 'e':
            
            printf("\n %c is a VOWEL \n", ch);
            break;

        case 'I':
        case 'i':
            
            printf("\n%c is a VOWEL \n", ch);
            break;
        case 'O':
        case 'o':
            
            printf("\n %c is a VOWEL \n", ch);
            break;
        case 'U':
        case 'u':
            
            printf("\n %c is a VOWEL \n", ch);
            break;
        
            default: printf("\nwhat you entered, is not a vowel\n");

}
        return 0;
}
