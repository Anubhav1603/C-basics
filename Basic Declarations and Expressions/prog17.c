#include<stdio.h>
/*
Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.
Test Data :
Input seconds: 25300
Expected Output:
There are:
H:M:S - 7:1:40
*/
int main()
{
    int input_sec, hours, minutes, seconds;

    //Taking input
    printf("Input seconds: ");
    scanf("%d", &input_sec);

    //Converting given integer (in seconds) to hours, minutes and seconds.
    hours = input_sec /3600;
    minutes = (input_sec - (hours*3600))/60;
    seconds = (input_sec - (hours*3600)) - (minutes* 60);
    printf("H:M:S - %d:%d:%d", hours,minutes,seconds);

    return 0;
}
