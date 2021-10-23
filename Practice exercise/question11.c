/*
Write a program to find whether a year entered by the user is a leap year or not. Take the year as input from the user.
*/
#include <stdio.h>

int main()
{
    int year;

    printf("Enter year to check: \n");
    scanf("%d", &year);

    if (year % 4 == 0)
    {
        printf("It's a leap year!\n");
    }
    else
    {
        printf("It's not a leap year\n");
    }
    return 0;
}