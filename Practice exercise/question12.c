/*
Write a program to determine whether a character entered by the user is lowercase or not.
*/

#include <stdio.h>

int main()
{
    char alphabet;

    printf("Enter character to check its lowercase or uppercase: \n");
    scanf("%c", &alphabet);

    if (alphabet >= 'a' && alphabet <= 'z')
    {
        printf("Lower Case\n");
    }

    else if (alphabet >= 'A' && alphabet <= 'Z')
    {
        printf("Upper Case\n");
    }
    return 0;
}