#include<stdio.h>
/*
Write a C program to convert a given integer (in days) to years, months and days, assumes that all months have 30 days and all years have 365 days.
Test Data :
Input no. of days: 2535
Expected Output:
6 Year(s)
11 Month(s)
15 Day(s)
*/
int main()
{
    int input_d, days, months, years;
    printf("Input no. of days: ");
    scanf("%d",&input_d);

    years = input_d/365;
    input_d = input_d - (years*365);
    months = input_d/30;
    days = (input_d - (months*30));
    printf("%d Year(s)\n", years);
    printf("%d Month(s)\n", months);
    printf("%d Day(s)\n", days);
    return 0;
}
